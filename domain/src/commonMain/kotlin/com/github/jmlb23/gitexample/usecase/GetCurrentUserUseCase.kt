package com.github.jmlb23.gitexample.usecase

import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.repository.Repository

class GetCurrentUserUseCase(private val repository: Repository<Int, User>) :
	UseCase<Unit, User> {
	override suspend fun invoke(input: Unit): Result<User> =
		repository.getByKey(0)
}