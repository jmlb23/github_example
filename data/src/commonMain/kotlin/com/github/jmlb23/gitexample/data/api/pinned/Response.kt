package com.github.jmlb23.gitexample.data.api.pinned

import kotlinx.serialization.Serializable

@Serializable
data class PinnedQueryResponse (
	val data: Data? = null
)

@Serializable
data class Data (
	val user: User? = null
)

@Serializable
data class User (
	val pinnedItems: PinnedItems? = null
)

@Serializable
data class PinnedItems (
	val edges: List<Edge>? = null
)

@Serializable
data class Edge (
	val node: Node? = null
)

@Serializable
data class Node (
	val name: String? = null,
	val description: String? = null,
	val stargazers: Stargazers? = null,
	val primaryLanguage: PrimaryLanguage? = null
)

@Serializable
data class PrimaryLanguage (
	val name: String? = null,
	val color: String? = null
)

@Serializable
data class Stargazers (
	val totalCount: Long? = null
)
