package com.github.jmlb23.gitexample.repo.impl

import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.mapper.toDomain
import com.github.jmlb23.gitexample.repository.NotificationsRepository

class NotificationsRepoImpl(private val githubApi: GithubApi) :
	NotificationsRepository {

	override suspend fun add(e: Notification): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun remove(k: Long): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun replace(k: Long, e: Notification): Result<Int> {
		TODO("Not yet implemented")
	}

	override suspend fun getByKey(k: Long): Result<Notification> {
		TODO("Not yet implemented")
	}

	override suspend fun filter(f: (Notification) -> Boolean): Result<List<Notification>> {
		TODO("Not yet implemented")
	}

	override suspend fun paginated(page: Int): Result<List<Notification>> {
		return githubApi.notifications(page).mapCatching { it.map { it.toDomain() } }
	}
}