package com.github.jmlb23.gitexample.di

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.redux.Store
import com.github.jmlb23.gitexample.state.Actions
import com.github.jmlb23.gitexample.state.AppState
import com.github.jmlb23.gitexample.state.Enviroment
import com.russhwolf.settings.Settings
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration

data class Components(
    val preferences: Settings,
    val oauth: Oauth,
    val environment: Enviroment,
    val redux: Store<AppState, Actions, Enviroment>
)

object CommonComponent {

    fun initKoin(koinScope: KoinAppDeclaration = {}) {
        koin(koinScope)
    }

    private fun koin(appDeclaration: KoinAppDeclaration = {}) = startKoin {
        appDeclaration(this)
        modules(listOf(diData, diState))
    }

    fun initKoin(): Components {
        return with(koin().koin) {
            Components(get(), get(), get(), get())
        }
    }
}




