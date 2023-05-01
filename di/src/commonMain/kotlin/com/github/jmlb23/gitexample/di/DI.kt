package com.github.jmlb23.gitexample.di

import co.touchlab.kermit.Kermit
import com.github.jmlb23.gitexample.data.api.GithubApi
import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.data.db.RepositoryFavoriteId
import com.github.jmlb23.gitexample.domain.Notification
import com.github.jmlb23.gitexample.domain.RepoFavorite
import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.getGithubApi
import com.github.jmlb23.gitexample.getOauthApi
import com.github.jmlb23.gitexample.ktorEngine
import com.github.jmlb23.gitexample.repo.impl.*
import com.github.jmlb23.gitexample.repository.Repository
import com.github.jmlb23.gitexample.state.Enviroment
import com.github.jmlb23.gitexample.state.store
import com.github.jmlb23.gitexample.usecase.*
import com.russhwolf.settings.Settings
import io.ktor.client.*
import io.ktor.client.engine.cio.*
import io.ktor.client.plugins.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.plugins.observer.*
import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.serialization.kotlinx.json.*
import io.realm.Configuration
import io.realm.Realm
import io.realm.RealmConfiguration
import kotlinx.serialization.json.Json
import org.koin.core.context.loadKoinModules
import org.koin.core.qualifier.qualifier
import org.koin.dsl.module

val di = module {
    single {
        Kermit()
    }

    single {
        HttpClient(ktorEngine()) {
            install(ContentNegotiation) {
                json(Json {
                    prettyPrint = true
                    isLenient = true
                    ignoreUnknownKeys = true
                    explicitNulls = false
                })
            }
            ResponseObserver {
                get<Kermit>().let { logger ->
                    logger.d { it.call.response.request.headers.toString() }
                    logger.d { it.call.response.request.url.toString() }
                }
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
        getOauthApi(get())
    }
    single<GithubApi> {
        getGithubApi(get())
    }

    single<Repository<Long, Notification>>(qualifier("NotificationsRepo")) {
        NotificationsRepoImpl(
            get()
        )
    }
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
    single<UseCase<Unit, User>>(qualifier("GetCurrentUserUseCase")) {
        GetCurrentUserUseCase(
            get(
                qualifier("UserRepo")
            )
        )
    }
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

    single {
        Enviroment(
            get(qualifier("GetNotificationsUseCase")),
            get(qualifier("GetCurrentUserUseCase")),
            get(qualifier("GetRepositoriesPaginatedUseCase")),
            get(qualifier("GetStarredRepositoriesPaginatedUseCase")),
            get(qualifier("GetRepositoriesFavoritePaginatedUseCase")),
            get(qualifier("RemoveRepositoriesFavoriteUseCase")),
            get(qualifier("AddRepositoriesFavoriteUseCase"))
        )
    }

    single {
        store(get())
    }
}