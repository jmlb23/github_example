package com.github.jmlb23.gitexample

import androidx.compose.runtime.compositionLocalOf
import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.redux.Store
import com.github.jmlb23.gitexample.state.Actions
import com.github.jmlb23.gitexample.state.AppState
import com.github.jmlb23.gitexample.state.Enviroment
import com.russhwolf.settings.Settings

val LocalOauth = compositionLocalOf<Oauth> {  error("Not provided") }
val LocalEncryptedPreferences = compositionLocalOf<Settings> { error("Not provided") }
val LocalStore = compositionLocalOf<Store<AppState, Actions, Enviroment>> { error("Not provided") }