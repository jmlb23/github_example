package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.diData
import com.russhwolf.settings.Settings
import org.koin.core.component.KoinComponent
import org.koin.core.component.get
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration

class IosComponent : KoinComponent {
    fun preferences(): Settings = get()
    fun oauth(): Oauth = get()
    fun environment(): Enviroment = get()
}

private fun koin(appDeclaration: KoinAppDeclaration = {}) = startKoin {
    appDeclaration()
}

fun initKoin() = koin {
    modules(listOf(diData, diState))
}.let { Unit }