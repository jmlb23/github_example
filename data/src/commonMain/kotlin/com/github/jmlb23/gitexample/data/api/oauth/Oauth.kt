package com.github.jmlb23.gitexample.data.api.oauth

interface Oauth {

	suspend fun getUrlLaunchFlow(): String

	suspend fun requestToken(
		code: String,
		state: String
	): Result<String?>
}