package com.github.jmlb23.gitexample.domain


data class Notification(
	val id: String?,
	val unread: Boolean,
	val reason: String?,
	val updatedAt: String?,
	val lastReadAt: String?,
	val subject: Subject,
	val repository: RepositoryNoti,
	val url: String?,
	val subscriptionURL: String?
)


data class RepositoryNoti(
	val id: Long,
	val nodeID: String?,
	val name: String?,
	val fullName: String?,
	val private: Boolean,
	val owner: OwnerNoti,
	val htmlURL: String?,
	val description: String?,
	val fork: Boolean,
	val url: String?,
	val forksURL: String?,
	val keysURL: String?,
	val collaboratorsURL: String?,
	val teamsURL: String?,
	val hooksURL: String?,
	val issueEventsURL: String?,
	val eventsURL: String?,
	val assigneesURL: String?,
	val branchesURL: String?,
	val tagsURL: String?,
	val blobsURL: String?,
	val gitTagsURL: String?,
	val gitRefsURL: String?,
	val treesURL: String?,
	val statusesURL: String?,
	val languagesURL: String?,
	val stargazersURL: String?,
	val contributorsURL: String?,
	val subscribersURL: String?,
	val subscriptionURL: String?,
	val commitsURL: String?,
	val gitCommitsURL: String?,
	val commentsURL: String?,
	val issueCommentURL: String?,
	val contentsURL: String?,
	val compareURL: String?,
	val mergesURL: String?,
	val archiveURL: String?,
	val downloadsURL: String?,
	val issuesURL: String?,
	val pullsURL: String?,
	val milestonesURL: String?,
	val notificationsURL: String?,
	val labelsURL: String?,
	val releasesURL: String?,
	val deploymentsURL: String?
)


data class OwnerNoti(
	val login: String?,
	val id: Long,
	val nodeID: String?,
	val avatarURL: String?,
	val gravatarID: String?,
	val url: String?,
	val htmlURL: String?,
	val followersURL: String?,
	val followingURL: String?,
	val gistsURL: String?,
	val starredURL: String?,
	val subscriptionsURL: String?,
	val organizationsURL: String?,
	val reposURL: String?,
	val eventsURL: String?,
	val receivedEventsURL: String?,
	val type: String?,
	val siteAdmin: Boolean
)


data class Subject(
	val title: String?,
	val url: String?,
	val latestCommentURL: String?,
	val type: String?
)
