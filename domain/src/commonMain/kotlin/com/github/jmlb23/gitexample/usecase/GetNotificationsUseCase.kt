package com.github.jmlb23.gitexample.usecase

import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.repository.Repository

class GetNotificationsUseCase(private val repository: Repository<Long, Notification>) :
	UseCase<Int, List<Notification>> {
	override suspend fun invoke(input: Int): Result<List<Notification>> =
		repository.paginated(input)
}