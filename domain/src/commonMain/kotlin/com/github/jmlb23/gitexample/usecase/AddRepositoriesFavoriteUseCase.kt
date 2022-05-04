package com.github.jmlb23.gitexample.usecase

import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.repository.Repository

class AddRepositoriesFavoriteUseCase(private val repository: Repository<String, RepoFavorite>) :
	UseCase<String, Int> {
	override suspend fun invoke(input: String): Result<Int> =
		repository.add(RepoFavorite(input))
}