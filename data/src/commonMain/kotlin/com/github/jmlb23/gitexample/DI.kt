package com.github.jmlb23.gitexample

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.data.api.oauth.OauthImpl
import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.data.api.GithubApiImpl
import com.github.jmlb23.gitexample.data.db.RepositoryFavoriteId
import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.repo.impl.NotificationsRepoImpl
import com.github.jmlb23.gitexample.repo.impl.RepoFavoriteRepositoryImpl
import com.github.jmlb23.gitexample.repo.impl.RepoRepositoryImpl
import com.github.jmlb23.gitexample.repo.impl.StarredRepositoryImpl
import com.github.jmlb23.gitexample.repo.impl.UserRepoImpl
import com.github.jmlb23.gitexample.repository.Repository
import com.github.jmlb23.gitexample.usecase.AddRepositoriesFavoriteUseCase
import com.github.jmlb23.gitexample.usecase.GetCurrentUserUseCase
import com.github.jmlb23.gitexample.usecase.GetNotificationsUseCase
import com.github.jmlb23.gitexample.usecase.GetRepositoriesFavoritePaginatedUseCase
import com.github.jmlb23.gitexample.usecase.GetRepositoriesPaginatedUseCase
import com.github.jmlb23.gitexample.usecase.GetStarredRepositoriesPaginatedUseCase
import com.github.jmlb23.gitexample.usecase.RemoveRepositoriesFavoriteUseCase
import com.github.jmlb23.gitexample.usecase.UseCase
import com.russhwolf.settings.Settings
import io.ktor.client.HttpClient
import io.ktor.client.engine.cio.CIO
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.observer.ResponseObserver
import io.ktor.client.request.header
import io.ktor.client.statement.request
import io.realm.Configuration
import io.realm.Realm
import io.realm.RealmConfiguration
import kotlinx.serialization.ExperimentalSerializationApi
import kotlinx.serialization.json.Json
import org.koin.core.qualifier.qualifier
import org.koin.dsl.module


@OptIn(ExperimentalSerializationApi::class)
val diData = module {
	single {
		HttpClient(CIO) {
			install(JsonFeature) {
				serializer = KotlinxSerializer(
					Json {
						prettyPrint = true
						isLenient = true
						ignoreUnknownKeys = true
						explicitNulls = false
					}
				)
			}
			ResponseObserver {
				println(it.call.response.request.headers)
				println(it.call.response.request.url)
			}
			defaultRequest {
				header("Authorization", "Bearer ${get<Settings>().getString("token")}")
			}
		}
	}

	single<Configuration> {
		RealmConfiguration.with(
			schema = setOf(
				RepositoryFavoriteId::class,
			)
		)
	}

	single {
		Realm.open(get())
	}

	single<Oauth> {
		OauthImpl(get())
	}
	single<GithubApi> {
		GithubApiImpl(get())
	}

	single<Repository<Long, Notification>>(qualifier("NotificationsRepo")) { NotificationsRepoImpl(get()) }
	single<Repository<Long, com.github.jmlb23.gitexample.domain.Repository>>(qualifier("RepoRepository")) {
		RepoRepositoryImpl(
			get()
		)
	}

	single<Repository<String, RepoFavorite>>(qualifier("RepoFavorite")) {
		RepoFavoriteRepositoryImpl(get())
	}

	single<Repository<Long, com.github.jmlb23.gitexample.domain.Repository>>(qualifier("StarredRepository")) {
		StarredRepositoryImpl(
			get()
		)
	}
	single<Repository<Long, User>>(qualifier("UserRepo")) { UserRepoImpl(get()) }
	single<UseCase<Int, List<Notification>>>(qualifier("GetNotificationsUseCase")) {
		GetNotificationsUseCase(
			get(
				qualifier(
					"NotificationsRepo"
				)
			)
		)
	}
	single<UseCase<Unit, User>>(qualifier("GetCurrentUserUseCase")) { GetCurrentUserUseCase(get(qualifier("UserRepo"))) }
	single<UseCase<Int, List<com.github.jmlb23.gitexample.domain.Repository>>>(qualifier("GetRepositoriesPaginatedUseCase")) {
		GetRepositoriesPaginatedUseCase(
			get(qualifier("RepoRepository"))
		)
	}
	single<UseCase<Int, List<com.github.jmlb23.gitexample.domain.Repository>>>(qualifier("GetStarredRepositoriesPaginatedUseCase")) {
		GetStarredRepositoriesPaginatedUseCase(
			get(qualifier("StarredRepository"))
		)
	}

	single<UseCase<Unit, List<RepoFavorite>>>(qualifier("GetRepositoriesFavoritePaginatedUseCase")) {
		GetRepositoriesFavoritePaginatedUseCase(
			get(qualifier("RepoFavorite"))
		)
	}

	single<UseCase<String, Int>>(qualifier("AddRepositoriesFavoriteUseCase")) {
		AddRepositoriesFavoriteUseCase(
			get(qualifier("RepoFavorite"))
		)
	}

	single<UseCase<String, Int>>(qualifier("RemoveRepositoriesFavoriteUseCase")) {
		RemoveRepositoriesFavoriteUseCase(
			get(qualifier("RepoFavorite"))
		)
	}
}