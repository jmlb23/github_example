package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.domain.Repository
import com.github.jmlb23.gitexample.domain.User

sealed interface Actions

sealed class NotificationsActions : Actions {
	object GetNotifications : NotificationsActions()
	data class SetNotifications(val notifications: List<Notification>) : NotificationsActions()
}

sealed class ProfileActions : Actions {
	object GetProfile : ProfileActions()
	data class SetProfile(val user: User) : ProfileActions()
}

sealed class RepositoriesActions : Actions {
	object GetRepositories : RepositoriesActions()
	data class SetRepositories(val repos: List<Repository>) : RepositoriesActions()
}

sealed class StarredRepositoriesActions : Actions {
	object GetRepositories : StarredRepositoriesActions()
	data class SetRepositories(val repos: List<Repository>) : StarredRepositoriesActions()
}

sealed class FavoritesActions : Actions {
	data class RemoveFavorite(val id: String) : FavoritesActions()
	data class SetFavorite(val id: String) : FavoritesActions()
	object GetFavorites : FavoritesActions()
	data class SetFavorites(val repos: List<RepoFavorite>) : FavoritesActions()
}