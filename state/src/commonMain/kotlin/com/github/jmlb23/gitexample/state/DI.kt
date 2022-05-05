package com.github.jmlb23.gitexample.state

import org.koin.core.context.loadKoinModules
import org.koin.core.qualifier.qualifier
import org.koin.dsl.module

val diStatePartial = module {
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

}

val diState = module {
    loadKoinModules(listOf(diStatePartial, diPlatform))
}