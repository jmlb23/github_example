package com.github.jmlb23.gitexample.repo.impl

import com.github.jmlb23.gitexample.data.db.RepositoryFavoriteId
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.flatMap
import com.github.jmlb23.gitexample.mapper.toDomain
import com.github.jmlb23.gitexample.mapper.toEntity
import com.github.jmlb23.gitexample.repository.RepoFavoriteRepository
import io.realm.Realm
import io.realm.query

class RepoFavoriteRepositoryImpl(private val realm: Realm) : RepoFavoriteRepository {
	override suspend fun add(e: RepoFavorite): Result<Int> = runCatching {
		realm.write {
			copyToRealm(e.toEntity())
		}
	}.fold({ Result.Companion.success(1) }, Result.Companion::failure)

	override suspend fun remove(k: String): Result<Int> = runCatching {
		realm.write {
			val obj = query<RepositoryFavoriteId>("id = $0", k).find()
			delete(obj)
		}
	}.fold({ Result.Companion.success(1) }, Result.Companion::failure)

	override suspend fun replace(k: String, e: RepoFavorite): Result<Int> =
		runCatching {
			remove(k).getOrThrow().let { add(e) }
		}.flatMap { it }

	override suspend fun getByKey(k: String): Result<RepoFavorite> {
		TODO("Not yet implemented")
	}

	override suspend fun filter(f: (RepoFavorite) -> Boolean): Result<List<RepoFavorite>> = runCatching{
		realm.query<RepositoryFavoriteId>().find().map { it.toDomain() }
	}

	override suspend fun paginated(page: Int): Result<List<RepoFavorite>> {
		TODO("Not yet implemented")
	}


}
