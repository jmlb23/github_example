package com.github.jmlb23.gitexample.repository

interface Repository<K, E> {
	suspend fun add(e: E): Result<Int>
	suspend fun remove(k: K): Result<Int>
	suspend fun replace(k: K, e: E): Result<Int>
	suspend fun getByKey(k: K): Result<E>
	suspend fun filter(f: (E) -> Boolean): Result<List<E>>
	suspend fun paginated(page: Int): Result<List<E>>
}