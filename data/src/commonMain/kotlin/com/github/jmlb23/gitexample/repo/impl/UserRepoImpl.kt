package com.github.jmlb23.gitexample.repo.impl

import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.PinnedRepo
import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.flatMap
import com.github.jmlb23.gitexample.mapper.toDomain
import com.github.jmlb23.gitexample.repository.NotificationsRepository
import com.github.jmlb23.gitexample.repository.UserRepository

class UserRepoImpl(private val githubApi: GithubApi) :
	UserRepository {
	override suspend fun add(e: User): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun remove(k: Long): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun replace(k: Long, e: User): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun getByKey(k: Long): Result<User> {
		val user = githubApi.currentUser()
		val username = user.map { it.login }.getOrDefault("") ?: ""
		val pined = githubApi.pinedRepos(username)
		val stats = githubApi
			.getStarred(username)
			.map { it.data?.user }
		return pined.flatMap { pinned ->
			stats.flatMap { stats ->
				user.mapCatching {
					it.toDomain().copy(
						pinned = pinned.toDomain(),
						starts = stats?.starredRepositories?.totalCount ?: 0,
						totalRepos = stats?.repositories?.totalCount ?: 0,
						totalOrganizations = stats?.organizations?.totalCount ?: 0,
						followers = stats?.followers?.totalCount ?: 0,
						following = stats?.following?.totalCount ?: 0
					)
				}
			}
		}
	}

	override suspend fun filter(f: (User) -> Boolean): Result<List<User>> {
		TODO("Not yet implemented")
	}

	override suspend fun paginated(page: Int): Result<List<User>> {
		TODO("Not yet implemented")
	}

}