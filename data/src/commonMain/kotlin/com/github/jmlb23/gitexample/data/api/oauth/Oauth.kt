package com.github.jmlb23.gitexample.data.api.oauth

interface Oauth {

	fun getUrlLaunchFlow(): String

	suspend fun requestToken(
		code: String,
		state: String
	): String?
}