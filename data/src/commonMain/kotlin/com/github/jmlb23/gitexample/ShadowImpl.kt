package com.github.jmlb23.gitexample

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.data.api.oauth.OauthImpl
import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.data.api.GithubApiImpl
import io.ktor.client.HttpClient


fun getGithubApi(client: HttpClient): GithubApi = GithubApiImpl(client)

fun getOauthApi(client: HttpClient): Oauth = OauthImpl(client)