package com.github.jmlb23.gitexample.di

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.redux.Store
import com.github.jmlb23.gitexample.state.Actions
import com.github.jmlb23.gitexample.state.AppState
import com.github.jmlb23.gitexample.state.Enviroment
import com.github.jmlb23.gitexample.state.diPlatform
import com.russhwolf.settings.Settings
import org.koin.core.component.KoinComponent
import org.koin.core.component.get
import org.koin.core.component.inject
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration

class CommonComponent : KoinComponent {
    val preferences: Settings by inject()
    val oauth: Oauth by inject()
    val environment: Enviroment by inject()
    val redux: Store<AppState, Actions, Enviroment> by inject()

    companion object{
        fun initKoin(koinScope: KoinAppDeclaration = {}) {
            koin(koinScope)
        }

        private fun koin(appDeclaration: KoinAppDeclaration = {}) = startKoin{
            appDeclaration()
            modules(listOf(diPlatform, di))

        }

        fun initKoin() {
            println("------> started")
            koin(){}
        }
    }
}




