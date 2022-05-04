package com.github.jmlb23.gitexample.mapper

import com.github.jmlb23.gitexample.data.api.notifications.NotificationElementResponse
import com.github.jmlb23.gitexample.data.api.notifications.OwnerResponse
import com.github.jmlb23.gitexample.data.api.notifications.RepositoryResponse
import com.github.jmlb23.gitexample.data.api.notifications.SubjectResponse
import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.OwnerNoti
import com.github.jmlb23.gitexample.domain.RepositoryNoti
import com.github.jmlb23.gitexample.domain.Subject

fun NotificationElementResponse.toDomain(): Notification = Notification(
	id,
	unread,
	reason,
	updatedAt,
	lastReadAt,
	subject.toDomain(),
	repository.toDomain(),
	url,
	subscriptionURL
)

fun SubjectResponse.toDomain(): Subject = Subject(
	title, url, latestCommentURL, type
)

fun RepositoryResponse.toDomain(): RepositoryNoti = RepositoryNoti(
	id,
	nodeID,
	name,
	fullName,
	private,
	owner.toDomain(),
	htmlURL,
	description,
	fork,
	url,
	forksURL,
	keysURL,
	collaboratorsURL,
	teamsURL,
	hooksURL,
	issueEventsURL,
	eventsURL,
	assigneesURL,
	branchesURL,
	tagsURL,
	blobsURL,
	gitTagsURL,
	gitRefsURL,
	treesURL,
	statusesURL,
	languagesURL,
	stargazersURL,
	contributorsURL,
	subscribersURL,
	subscriptionURL,
	commitsURL,
	gitCommitsURL,
	commentsURL,
	issueCommentURL,
	contentsURL,
	compareURL,
	mergesURL,
	archiveURL,
	downloadsURL,
	issuesURL,
	pullsURL,
	milestonesURL,
	notificationsURL,
	labelsURL,
	releasesURL,
	deploymentsURL
)

fun OwnerResponse.toDomain(): OwnerNoti = OwnerNoti(
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