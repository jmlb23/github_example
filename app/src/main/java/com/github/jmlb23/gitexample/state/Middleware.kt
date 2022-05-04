package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.redux.Middleware
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import java.util.logging.Logger

val apiMiddleware: Middleware<AppState, Actions, Enviroment> =
	{ restart ->
		{ store ->
			{ next ->
				{ action ->
					val logger = Logger.getLogger("API_MIDDLEWARE")
					logger.info(action.toString())
					withContext(Dispatchers.IO) {
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
									logger.severe(it.message)
								})
							}
							is RepositoriesActions.GetRepositories -> {
								store.enviroment.getRepositoriesPaginatedUseCase(store.state().repos.page).fold({
									restart(RepositoriesActions.SetRepositories(it))
								}, {
									logger.severe(it.message)
								})
							}
							is StarredRepositoriesActions.GetRepositories -> {
								store.enviroment.getRepositoriesStarredPaginatedUseCase(store.state().starred.page).fold({
									restart(StarredRepositoriesActions.SetRepositories(it))
								}, {
									logger.severe(it.message)
								})
							}
							is FavoritesActions.GetFavorites -> {
								store.enviroment.getRepositoriesFavoriteUseCase(Unit).fold({
									restart(FavoritesActions.SetFavorites(it))
								}, {
									logger.severe(it.message)
								})
							}
							is FavoritesActions.RemoveFavorite -> {
								store.enviroment.removeRepositoriesFavoriteUseCase(action.id).fold({
									next(action)
								}, {
									logger.severe(it.message)
								})
							}
							is FavoritesActions.SetFavorite -> {
								store.enviroment.addRepositoriesFavoriteUseCase(action.id).fold({
									next(action)
								}, {
									logger.severe(it.message)
								})
							}
							else -> next(action)
						}
					}
				}
			}
		}
	}