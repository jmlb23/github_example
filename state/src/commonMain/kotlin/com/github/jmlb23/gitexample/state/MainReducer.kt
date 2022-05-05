package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.domain.RepoFavorite

fun notificationsReducer(state: NotificationsState, actions: Actions) =
	when (actions) {
		is NotificationsActions.SetNotifications -> state.copy(
			currentPage = state.currentPage + 1,
			notification = state.notification + actions.notifications
		)
		else -> state
	}

fun profileReducer(state: UserProfile, actions: Actions) =
	when (actions) {
		is ProfileActions.SetProfile -> state.copy(user = actions.user)
		else -> state
	}

fun reposReducer(state: Repos, actions: Actions) =
	when (actions) {
		is RepositoriesActions.SetRepositories -> state.copy(repos = state.repos + actions.repos, page = state.page + 1)
		else -> state
	}

fun favoritesReducer(state: Favorites, actions: Actions) =
	when (actions) {
		is FavoritesActions.SetFavorite -> state.copy(favorites = state.favorites + RepoFavorite(actions.id))
		is FavoritesActions.RemoveFavorite -> state.copy(favorites = state.favorites - RepoFavorite(actions.id))
		is FavoritesActions.SetFavorites -> state.copy(favorites = actions.repos)
		else -> state
	}

fun starredReducer(state: Starred, actions: Actions) =
	when (actions) {
		is StarredRepositoriesActions.SetRepositories -> state.copy(
			starred = state.starred + actions.repos,
			page = state.page + 1
		)
		else -> state
	}


fun mainReducer(state: AppState, actions: Actions): AppState =
	state.copy(
		notifications = notificationsReducer(state.notifications, actions),
		userProfile = profileReducer(state.userProfile, actions),
		repos = reposReducer(state.repos, actions),
		favorites = favoritesReducer(state.favorites, actions),
		starred = starredReducer(state.starred, actions)
	)

