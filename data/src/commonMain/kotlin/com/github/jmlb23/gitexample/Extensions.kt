package com.github.jmlb23.gitexample

fun <T, R> Result<T>.flatMap(f: (T) -> Result<R>): Result<R> = this.fold({
	f(it)
}, {
	Result.failure(it)
})

