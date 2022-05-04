package com.github.jmlb23.gitexample.domain

data class Repository (
	val id: Long?,
	val nodeID: String?,
	val name: String?,
	val fullName: String?,
	val owner: Owner,
	val private: Boolean?,
	val htmlURL: String?,
	val description: String?,
	val fork: Boolean?,
	val url: String?,
	val archiveURL: String?,
	val assigneesURL: String?,
	val blobsURL: String?,
	val branchesURL: String?,
	val collaboratorsURL: String?,
	val commentsURL: String?,
	val commitsURL: String?,
	val compareURL: String?,
	val contentsURL: String?,
	val contributorsURL: String?,
	val deploymentsURL: String?,
	val downloadsURL: String?,
	val eventsURL: String?,
	val forksURL: String?,
	val gitCommitsURL: String?,
	val gitRefsURL: String?,
	val gitTagsURL: String?,
	val gitURL: String?,
	val issueCommentURL: String?,
	val issueEventsURL: String?,
	val issuesURL: String?,
	val keysURL: String?,
	val labelsURL: String?,
	val languagesURL: String?,
	val mergesURL: String?,
	val milestonesURL: String?,
	val notificationsURL: String?,
	val pullsURL: String?,
	val releasesURL: String?,
	val sshURL: String?,
	val stargazersURL: String?,
	val statusesURL: String?,
	val subscribersURL: String?,
	val subscriptionURL: String?,
	val tagsURL: String?,
	val teamsURL: String?,
	val treesURL: String?,
	val cloneURL: String?,
	val mirrorURL: String?,
	val hooksURL: String?,
	val svnURL: String?,
	val homepage: String?,
	val language: String? = null,
	val forksCount: Long?,
	val stargazersCount: Long?,
	val watchersCount: Long?,
	val size: Long?,
	val defaultBranch: String?,
	val openIssuesCount: Long?,
	val isTemplate: Boolean?,
	val topics: List<String?>,
	val hasIssues: Boolean?,
	val hasProjects: Boolean?,
	val hasWiki: Boolean?,
	val hasPages: Boolean?,
	val hasDownloads: Boolean?,
	val archived: Boolean?,
	val disabled: Boolean?,
	val visibility: String?,
	val pushedAt: String?,
	val createdAt: String?,
	val updatedAt: String?,
	val permissions: Permissions,
	val allowRebaseMerge: Boolean?,
	val templateRepository: String?,
	val tempCloneToken: String?,
	val allowSquashMerge: Boolean?,
	val allowAutoMerge: Boolean?,
	val deleteBranchOnMerge: Boolean?,
	val allowMergeCommit: Boolean?,
	val subscribersCount: Long?,
	val networkCount: Long?,
	val license: License?,
	val forks: Long?,
	val openIssues: Long?,
	val watchers: Long?
)

data class License (
	val key: String?,
	val name: String?,
	val url: String?,
	val spdxID: String?,
	val nodeID: String?,
	val htmlURL: String?
)

data class Owner (
	val login: String?,
	val id: Long?,
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
	val siteAdmin: Boolean?
)

data class Permissions (
	val admin: Boolean?,
	val push: Boolean?,
	val pull: Boolean?
)
