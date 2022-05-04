package com.github.jmlb23.gitexample.data.api.notifications

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class NotificationElementResponse (
	val id: String?,
	val unread: Boolean,
	val reason: String?,

	@SerialName("updated_at")
	val updatedAt: String?,

	@SerialName("last_read_at")
	val lastReadAt: String?,

	val subject: SubjectResponse,
	val repository: RepositoryResponse,
	val url: String?,

	@SerialName("subscription_url")
	val subscriptionURL: String?
)

@Serializable
data class RepositoryResponse (
	val id: Long,

	@SerialName("node_id")
	val nodeID: String?,

	val name: String?,

	@SerialName("full_name")
	val fullName: String?,

	val private: Boolean,
	val owner: OwnerResponse,

	@SerialName("html_url")
	val htmlURL: String?,

	val description: String?,
	val fork: Boolean,
	val url: String?,

	@SerialName("forks_url")
	val forksURL: String?,

	@SerialName("keys_url")
	val keysURL: String?,

	@SerialName("collaborators_url")
	val collaboratorsURL: String?,

	@SerialName("teams_url")
	val teamsURL: String?,

	@SerialName("hooks_url")
	val hooksURL: String?,

	@SerialName("issue_events_url")
	val issueEventsURL: String?,

	@SerialName("events_url")
	val eventsURL: String?,

	@SerialName("assignees_url")
	val assigneesURL: String?,

	@SerialName("branches_url")
	val branchesURL: String?,

	@SerialName("tags_url")
	val tagsURL: String?,

	@SerialName("blobs_url")
	val blobsURL: String?,

	@SerialName("git_tags_url")
	val gitTagsURL: String?,

	@SerialName("git_refs_url")
	val gitRefsURL: String?,

	@SerialName("trees_url")
	val treesURL: String?,

	@SerialName("statuses_url")
	val statusesURL: String?,

	@SerialName("languages_url")
	val languagesURL: String?,

	@SerialName("stargazers_url")
	val stargazersURL: String?,

	@SerialName("contributors_url")
	val contributorsURL: String?,

	@SerialName("subscribers_url")
	val subscribersURL: String?,

	@SerialName("subscription_url")
	val subscriptionURL: String?,

	@SerialName("commits_url")
	val commitsURL: String?,

	@SerialName("git_commits_url")
	val gitCommitsURL: String?,

	@SerialName("comments_url")
	val commentsURL: String?,

	@SerialName("issue_comment_url")
	val issueCommentURL: String?,

	@SerialName("contents_url")
	val contentsURL: String?,

	@SerialName("compare_url")
	val compareURL: String?,

	@SerialName("merges_url")
	val mergesURL: String?,

	@SerialName("archive_url")
	val archiveURL: String?,

	@SerialName("downloads_url")
	val downloadsURL: String?,

	@SerialName("issues_url")
	val issuesURL: String?,

	@SerialName("pulls_url")
	val pullsURL: String?,

	@SerialName("milestones_url")
	val milestonesURL: String?,

	@SerialName("notifications_url")
	val notificationsURL: String?,

	@SerialName("labels_url")
	val labelsURL: String?,

	@SerialName("releases_url")
	val releasesURL: String?,

	@SerialName("deployments_url")
	val deploymentsURL: String?
)

@Serializable
data class OwnerResponse (
	val login: String?,
	val id: Long,

	@SerialName("node_id")
	val nodeID: String?,

	@SerialName("avatar_url")
	val avatarURL: String?,

	@SerialName("gravatar_id")
	val gravatarID: String?,

	val url: String?,

	@SerialName("html_url")
	val htmlURL: String?,

	@SerialName("followers_url")
	val followersURL: String?,

	@SerialName("following_url")
	val followingURL: String?,

	@SerialName("gists_url")
	val gistsURL: String?,

	@SerialName("starred_url")
	val starredURL: String?,

	@SerialName("subscriptions_url")
	val subscriptionsURL: String?,

	@SerialName("organizations_url")
	val organizationsURL: String?,

	@SerialName("repos_url")
	val reposURL: String?,

	@SerialName("events_url")
	val eventsURL: String?,

	@SerialName("received_events_url")
	val receivedEventsURL: String?,

	val type: String?,

	@SerialName("site_admin")
	val siteAdmin: Boolean
)

@Serializable
data class SubjectResponse (
	val title: String?,
	val url: String?,

	@SerialName("latest_comment_url")
	val latestCommentURL: String?,

	val type: String?
)
