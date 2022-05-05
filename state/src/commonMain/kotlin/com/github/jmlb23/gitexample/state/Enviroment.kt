package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.domain.Repository
import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.usecase.GetRepositoriesFavoritePaginatedUseCase
import com.github.jmlb23.gitexample.usecase.UseCase

data class Enviroment(
	val getNotificationsUseCase: UseCase<Int, List<Notification>>,
	val getCurrentUserUseCase: UseCase<Unit, User>,
	val getRepositoriesPaginatedUseCase: UseCase<Int, List<Repository>>,
	val getRepositoriesStarredPaginatedUseCase: UseCase<Int, List<Repository>>,
	val getRepositoriesFavoriteUseCase: UseCase<Unit, List<RepoFavorite>>,
	val removeRepositoriesFavoriteUseCase: UseCase<String, Int>,
	val addRepositoriesFavoriteUseCase: UseCase<String, Int>,
)