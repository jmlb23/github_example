package com.github.jmlb23.gitexample.data.api.user

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class UserResponse(
	val login: String? = null,
	val id: Long? = null,

	@SerialName("node_id")
	val nodeID: String? = null,

	@SerialName("avatar_url")
	val avatarURL: String? = null,

	@SerialName("gravatar_id")
	val gravatarID: String? = null,

	val url: String? = null,

	@SerialName("html_url")
	val htmlURL: String? = null,

	@SerialName("followers_url")
	val followersURL: String? = null,

	@SerialName("following_url")
	val followingURL: String? = null,

	@SerialName("gists_url")
	val gistsURL: String? = null,

	@SerialName("starred_url")
	val starredURL: String? = null,

	@SerialName("subscriptions_url")
	val subscriptionsURL: String? = null,

	@SerialName("organizations_url")
	val organizationsURL: String? = null,

	@SerialName("repos_url")
	val reposURL: String? = null,

	@SerialName("events_url")
	val eventsURL: String? = null,

	@SerialName("received_events_url")
	val receivedEventsURL: String? = null,

	val type: String? = null,

	@SerialName("site_admin")
	val siteAdmin: Boolean? = null,

	val name: String? = null,
	val company: String? = null,
	val blog: String? = null,
	val location: String? = null,
	val email: String? = null,
	val hireable: Boolean? = null,
	val bio: String? = null,

	@SerialName("twitter_username")
	val twitterUsername: String? = null,

	@SerialName("public_repos")
	val publicRepos: Long? = null,

	@SerialName("public_gists")
	val publicGists: Long? = null,

	val followers: Long? = null,
	val following: Long? = null,

	@SerialName("created_at")
	val createdAt: String? = null,

	@SerialName("updated_at")
	val updatedAt: String? = null,

	@SerialName("private_gists")
	val privateGists: Long? = null,

	@SerialName("total_private_repos")
	val totalPrivateRepos: Long? = null,

	@SerialName("owned_private_repos")
	val ownedPrivateRepos: Long? = null,

	@SerialName("disk_usage")
	val diskUsage: Long? = null,

	val collaborators: Long? = null,

	@SerialName("two_factor_authentication")
	val twoFactorAuthentication: Boolean? = null,

	val plan: PlanResponse? = null
)

@Serializable
data class PlanResponse(
	val name: String? = null,
	val space: Long? = null,

	@SerialName("private_repos")
	val privateRepos: Long? = null,

	val collaborators: Long? = null
)
