package com.github.jmlb23.gitexample.state

import co.touchlab.kermit.Kermit
import com.github.jmlb23.gitexample.redux.Middleware
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext

val apiMiddleware: Middleware<AppState, Actions, Enviroment> =
	{ restart ->
		{ store ->
			{ next ->
				{ action ->
					val logger = Kermit()
					logger.i { action.toString() }
					withContext(Dispatchers.Default) {
						when (action) {
							NotificationsActions.GetNotifications -> {
								val notifications =
									store.enviroment.getNotificationsUseCase(store.state().notifications.currentPage).getOrDefault(
										emptyList()
									)
								restart(NotificationsActions.SetNotifications(notifications))
							}
							is ProfileActions.GetProfile -> {
								store.enviroment.getCurrentUserUseCase(Unit).fold({
									restart(ProfileActions.SetProfile(it))
								}, {
									logger.e { it.message ?: "" }
								})
							}
							is RepositoriesActions.GetRepositories -> {
								store.enviroment.getRepositoriesPaginatedUseCase(store.state().repos.page).fold({
									restart(RepositoriesActions.SetRepositories(it))
								}, {
									logger.e { it.message ?: "" }
								})
							}
							is StarredRepositoriesActions.GetRepositories -> {
								store.enviroment.getRepositoriesStarredPaginatedUseCase(store.state().starred.page).fold({
									restart(StarredRepositoriesActions.SetRepositories(it))
								}, {
									logger.e { it.message ?: "" }
								})
							}
							is FavoritesActions.GetFavorites -> {
								store.enviroment.getRepositoriesFavoriteUseCase(Unit).fold({
									restart(FavoritesActions.SetFavorites(it))
								}, {
									logger.e { it.message ?: "" }
								})
							}
							is FavoritesActions.RemoveFavorite -> {
								store.enviroment.removeRepositoriesFavoriteUseCase(action.id).fold({
									next(action)
								}, {
									logger.e { it.message ?: "" }
								})
							}
							is FavoritesActions.SetFavorite -> {
								store.enviroment.addRepositoriesFavoriteUseCase(action.id).fold({
									next(action)
								}, {
									logger.e { it.message ?: "" }
								})
							}
							else -> next(action)
						}
					}
				}
			}
		}
	}