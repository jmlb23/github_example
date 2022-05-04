package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.redux.Store
import com.github.jmlb23.gitexample.redux.createStore

fun store(environment: Enviroment): Store<AppState, Actions, Enviroment> =
	createStore(
		initialAppState(), ::mainReducer, listOf(apiMiddleware), environment
	)

private fun initialAppState() = AppState(
	NotificationsState(
		1,
		emptyList()
	),
	UserProfile(null),
	Repos(1, emptyList()),
	Favorites(emptyList()),
	Starred(1, emptyList())
)