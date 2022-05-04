package com.github.jmlb23.gitexample.usecase

import com.github.jmlb23.gitexample.repository.Repository

class GetStarredRepositoriesPaginatedUseCase(private val repository: Repository<Long, com.github.jmlb23.gitexample.domain.Repository>) :
	UseCase<Int, List<com.github.jmlb23.gitexample.domain.Repository>> {
	override suspend fun invoke(input: Int): Result<List<com.github.jmlb23.gitexample.domain.Repository>> =
		repository.paginated(input)
}