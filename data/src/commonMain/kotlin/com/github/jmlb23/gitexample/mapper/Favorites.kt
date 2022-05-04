package com.github.jmlb23.gitexample.mapper

import com.github.jmlb23.gitexample.data.db.RepositoryFavoriteId
import com.github.jmlb23.gitexample.domain.RepoFavorite

fun RepositoryFavoriteId.toDomain() = RepoFavorite(id)
fun RepoFavorite.toEntity() = RepositoryFavoriteId().apply {
	this.id = this@toEntity.id
}