package com.github.jmlb23.gitexample.data.api.starred

import kotlinx.serialization.*

@Serializable
data class StatsResponse (
	val data: Data? = null
)

@Serializable
data class Data (
	val user: User? = null
)

@Serializable
data class User (
	val organizations: Stats? = null,
	val starredRepositories: Stats? = null,
	val repositories: Stats? = null,
	val followers: Stats? = null,
	val following: Stats? = null
)

@Serializable
data class Stats (
	val totalCount: Long? = null
)
