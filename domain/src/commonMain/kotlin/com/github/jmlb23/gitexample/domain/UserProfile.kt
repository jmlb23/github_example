package com.github.jmlb23.gitexample.domain

data class User(
	val login: String? = null,
	val id: Long? = null,
	val nodeID: String? = null,
	val avatarURL: String? = null,
	val gravatarID: String? = null,
	val url: String? = null,
	val htmlURL: String? = null,
	val followersURL: String? = null,
	val followingURL: String? = null,
	val gistsURL: String? = null,
	val starredURL: String? = null,
	val subscriptionsURL: String? = null,
	val organizationsURL: String? = null,
	val reposURL: String? = null,
	val eventsURL: String? = null,
	val receivedEventsURL: String? = null,
	val type: String? = null,
	val siteAdmin: Boolean? = null,
	val name: String? = null,
	val company: String? = null,
	val blog: String? = null,
	val location: String? = null,
	val email: String? = null,
	val hireable: Boolean? = null,
	val bio: String? = null,
	val twitterUsername: String? = null,
	val publicRepos: Long? = null,
	val publicGists: Long? = null,
	val followers: Long? = null,
	val following: Long? = null,
	val createdAt: String? = null,
	val updatedAt: String? = null,
	val privateGists: Long? = null,
	val totalPrivateRepos: Long? = null,
	val ownedPrivateRepos: Long? = null,
	val diskUsage: Long? = null,
	val collaborators: Long? = null,
	val twoFactorAuthentication: Boolean? = null,
	val plan: Plan? = null,
	val pinned: List<PinnedRepo>? = null,
	val starts: Long,
	val totalRepos: Long,
	val totalOrganizations: Long
)

data class PinnedRepo(
	val name: String?,
	val description: String?,
	val starts: String?,
	val lang: String?,
	val langColor: String?
)

data class Plan(
	val name: String? = null,
	val space: Long? = null,
	val privateRepos: Long? = null,
	val collaborators: Long? = null
)
