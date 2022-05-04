package com.github.jmlb23.gitexample.mapper

import com.github.jmlb23.gitexample.data.api.repositories.LicenseRepoResponse
import com.github.jmlb23.gitexample.data.api.repositories.OwnerRepoResponse
import com.github.jmlb23.gitexample.data.api.repositories.PermissionsRepoResponse
import com.github.jmlb23.gitexample.data.api.repositories.RepositoryRepoResponse
import com.github.jmlb23.gitexample.domain.License
import com.github.jmlb23.gitexample.domain.Owner
import com.github.jmlb23.gitexample.domain.Permissions
import com.github.jmlb23.gitexample.domain.Repository

fun RepositoryRepoResponse.toDomain(): Repository = Repository(
	id,
	nodeID,
	name,
	fullName,
	owner.toDomain(),
	private,
	htmlURL,
	description,
	fork,
	url,
	archiveURL,
	assigneesURL,
	blobsURL,
	branchesURL,
	collaboratorsURL,
	commentsURL,
	commitsURL,
	compareURL,
	contentsURL,
	contributorsURL,
	deploymentsURL,
	downloadsURL,
	eventsURL,
	forksURL,
	gitCommitsURL,
	gitRefsURL,
	gitTagsURL,
	gitURL,
	issueCommentURL,
	issueEventsURL,
	issuesURL,
	keysURL,
	labelsURL,
	languagesURL,
	mergesURL,
	milestonesURL,
	notificationsURL,
	pullsURL,
	releasesURL,
	sshURL,
	stargazersURL,
	statusesURL,
	subscribersURL,
	subscriptionURL,
	tagsURL,
	teamsURL,
	treesURL,
	cloneURL,
	mirrorURL,
	hooksURL,
	svnURL,
	homepage,
	language,
	forksCount,
	stargazersCount,
	watchersCount,
	size,
	defaultBranch,
	openIssuesCount,
	isTemplate,
	topics,
	hasIssues,
	hasProjects,
	hasWiki,
	hasPages,
	hasDownloads,
	archived,
	disabled,
	visibility,
	pushedAt,
	createdAt,
	updatedAt,
	permissions.toDomain(),
	allowRebaseMerge,
	templateRepository,
	tempCloneToken,
	allowSquashMerge,
	allowAutoMerge,
	deleteBranchOnMerge,
	allowMergeCommit,
	subscribersCount,
	networkCount,
	license?.toDomain(),
	forks,
	openIssues,
	watchers
)

fun OwnerRepoResponse.toDomain(): Owner = Owner(
	login,
	id,
	nodeID,
	avatarURL,
	gravatarID,
	url,
	htmlURL,
	followersURL,
	followingURL,
	gistsURL,
	starredURL,
	subscriptionsURL,
	organizationsURL,
	reposURL,
	eventsURL,
	receivedEventsURL,
	type,
	siteAdmin
)

fun PermissionsRepoResponse.toDomain(): Permissions =
	Permissions(
		admin, push, pull
	)

fun LicenseRepoResponse.toDomain(): License =
	License(key, name, url, spdxID, nodeID, htmlURL)