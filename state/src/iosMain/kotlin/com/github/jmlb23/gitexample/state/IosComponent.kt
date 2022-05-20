package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.diData
import com.github.jmlb23.gitexample.redux.Store
import com.russhwolf.settings.Settings
import org.koin.core.component.KoinComponent
import org.koin.core.component.get
import org.koin.core.component.inject
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration

class IosComponent : KoinComponent {
    val preferences: Settings by inject()
    val oauth: Oauth by inject()
    val environment: Enviroment by inject()
    val redux: Store<AppState, Actions, Enviroment> by inject()
}

private fun koin(appDeclaration: KoinAppDeclaration = {}) = startKoin {
    appDeclaration()
    modules(listOf(diData, diState))
}

fun initKoin() = koin {}