package com.github.jmlb23.gitexample.data.api.oauth

import com.github.jmlb23.gitexample.BuildKonfig
import com.soywiz.krypto.encoding.base64
import com.soywiz.krypto.sha256
import io.ktor.client.HttpClient
import io.ktor.client.call.*
import io.ktor.client.request.get
import io.ktor.http.Url
import io.ktor.util.*
import io.ktor.utils.io.charsets.Charsets
import io.ktor.utils.io.core.toByteArray
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.jsonPrimitive
import kotlin.random.Random

internal class OauthImpl(
	private val httpClient: HttpClient
) : Oauth {
	private val verifier: String =
		Random.nextBytes(32)
			.let { it.base64 }


	private fun challenge(): String =
		verifier.toByteArray(Charsets.ISO_8859_1).let {
			it.sha256().base64
		}

	private val state = Random.nextBytes(32).joinToString("")


	private fun uri(): String =
		"${BuildKonfig.AUTH_URI}/?&response_type=code&client_id=${BuildKonfig.CLIENT_ID}&redirect_uri=${BuildKonfig.REDIR_URI}&scope=api,notifications&code_challenge=${challenge()}&code_challenge_method=S256&state=$state"

	override fun getUrlLaunchFlow(): String =
		Url(uri()).toString()


	override suspend fun requestToken(
		code: String,
		state: String
	): String? {
		return if (state == this.state)
			JsonObject(httpClient.get("${BuildKonfig.TOKEN_URI}/?client_id=${BuildKonfig.CLIENT_ID}&client_secret=${BuildKonfig.SECRET}&code=$code&redirect_uri=${BuildKonfig.REDIR_URI}").body())["access_token"]?.jsonPrimitive?.content
		else throw IllegalArgumentException("State not valid")
	}

}