package com.github.jmlb23.gitexample.repo.impl

import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.domain.Repository
import com.github.jmlb23.gitexample.mapper.toDomain
import com.github.jmlb23.gitexample.repository.RepoRepository
import com.github.jmlb23.gitexample.repository.StarredRepository

class StarredRepositoryImpl(private val api: GithubApi) : StarredRepository {
	override suspend fun add(e: Repository): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun remove(k: Long): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun replace(k: Long, e: Repository): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun getByKey(k: Long): Result<Repository> {
		TODO("Not yet implemented")
	}

	override suspend fun filter(f: (Repository) -> Boolean): Result<List<Repository>> {
		TODO("Not yet implemented")
	}

	override suspend fun paginated(page: Int): Result<List<Repository>> =
		api.getStarredRepos(page).map { it.map { it.toDomain() } }
}