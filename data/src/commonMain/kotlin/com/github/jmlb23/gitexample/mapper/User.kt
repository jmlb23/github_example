package com.github.jmlb23.gitexample.mapper

import com.github.jmlb23.gitexample.data.api.pinned.PinnedQueryResponse
import com.github.jmlb23.gitexample.data.api.user.PlanResponse
import com.github.jmlb23.gitexample.data.api.user.UserResponse
import com.github.jmlb23.gitexample.domain.PinnedRepo
import com.github.jmlb23.gitexample.domain.Plan
import com.github.jmlb23.gitexample.domain.User

fun UserResponse.toDomain(): User = User(
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
	siteAdmin,
	name,
	company,
	blog,
	location,
	email,
	hireable,
	bio,
	twitterUsername,
	publicRepos,
	publicGists,
	followers,
	following,
	createdAt,
	updatedAt,
	privateGists,
	totalPrivateRepos,
	ownedPrivateRepos,
	diskUsage,
	collaborators,
	twoFactorAuthentication,
	plan?.toDomain(),
	emptyList(),
	0,
	0,
	0
)

fun PinnedQueryResponse.toDomain(): List<PinnedRepo> =
	data?.user?.pinnedItems?.edges?.mapNotNull {
		it.node
	}?.map {
		PinnedRepo(
			it.name,
			it.description,
			it.stargazers?.totalCount.toString(),
			it.primaryLanguage?.name,
			it.primaryLanguage?.color
		)
	}.orEmpty()

fun PlanResponse.toDomain(): Plan = Plan(
	name, space, privateRepos, collaborators
)