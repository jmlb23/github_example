package com.github.jmlb23.gitexample.usecase

interface UseCase<in I, out T> {
	suspend operator fun invoke(input: I): Result<T>
}