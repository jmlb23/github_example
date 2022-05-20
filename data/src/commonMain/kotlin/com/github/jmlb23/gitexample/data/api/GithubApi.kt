package com.github.jmlb23.gitexample.data.api

import com.github.jmlb23.gitexample.data.api.notifications.NotificationElementResponse
import com.github.jmlb23.gitexample.data.api.pinned.PinnedQueryResponse
import com.github.jmlb23.gitexample.data.api.repositories.RepositoryRepoResponse
import com.github.jmlb23.gitexample.data.api.starred.StatsResponse
import com.github.jmlb23.gitexample.data.api.user.UserResponse
import io.ktor.client.HttpClient
import io.ktor.client.call.*
import io.ktor.client.request.*

interface GithubApi {
    suspend fun notifications(page: Int): Result<List<NotificationElementResponse>>
    suspend fun currentUser(): Result<UserResponse>
    suspend fun pinedRepos(username: String): Result<PinnedQueryResponse>
    suspend fun getStarred(username: String): Result<StatsResponse>
    suspend fun getUserRepos(page: Int): Result<List<RepositoryRepoResponse>>
    suspend fun getStarredRepos(page: Int): Result<List<RepositoryRepoResponse>>
}

internal class GithubApiImpl(private val httpClient: HttpClient) : GithubApi {

    override suspend fun notifications(page: Int): Result<List<NotificationElementResponse>> =
        runCatching {
            httpClient.get("https://api.github.com/notifications?page=$page").body()
        }

    override suspend fun currentUser(): Result<UserResponse> = runCatching {
        httpClient.get("https://api.github.com/user").body()
    }

    override suspend fun pinedRepos(username: String): Result<PinnedQueryResponse> = runCatching {
        httpClient.post("https://api.github.com/graphql") {
            setBody(
                """{"query":"{\n  user(login: \"$username\") {\n    pinnedItems(first: 10) {\n      edges {\n        node {\n          ... on Repository {\n            name\n            description\n            stargazers {\n              totalCount\n            }\n            primaryLanguage {\n              name\n              color\n            }\n          }\n        }\n      }\n    }\n  }\n}","variables":{}}""".trimIndent()
            )
        }.body()
    }

    override suspend fun getStarred(username: String): Result<StatsResponse> = runCatching {
        httpClient.post("https://api.github.com/graphql") {
            setBody(
                """{"query":"{user(login: \"$username\"){organizations{totalCount}starredRepositories{totalCount}repositories{totalCount}followers{totalCount}following{totalCount}}}","variables":{}}""".trimIndent()
            )
        }.body()
    }


    override suspend fun getUserRepos(page: Int): Result<List<RepositoryRepoResponse>> =
        runCatching {
            httpClient.get("https://api.github.com/user/repos?page=$page").body()
        }

    override suspend fun getStarredRepos(page: Int): Result<List<RepositoryRepoResponse>> =
        runCatching {
            httpClient.get("https://api.github.com/user/starred?page=$page").body()
        }
}