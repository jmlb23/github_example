package com.github.jmlb23.gitexample.usecase

import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.repository.Repository

class GetRepositoriesFavoritePaginatedUseCase(private val repository: Repository<String, RepoFavorite>) :
	UseCase<Unit, List<RepoFavorite>> {
	override suspend fun invoke(input: Unit): Result<List<RepoFavorite>> =
		repository.filter { true }
}