package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.domain.Repository
import com.github.jmlb23.gitexample.domain.User

data class NotificationsState(val currentPage: Int, val notification: List<Notification>)
data class UserProfile(val user: User?)
data class Repos(val page: Int, val repos: List<Repository>)
data class Favorites(val favorites: List<RepoFavorite>)
data class Starred(val page: Int, val starred: List<Repository>)

data class AppState(
	val notifications: NotificationsState,
	val userProfile: UserProfile,
	val repos: Repos,
	val favorites: Favorites,
	val starred: Starred
)