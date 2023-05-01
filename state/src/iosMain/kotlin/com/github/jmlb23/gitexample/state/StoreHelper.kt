package com.github.jmlb23.gitexample.state

import com.github.jmlb23.gitexample.redux.Store
import com.github.jmlb23.gitexample.redux.Subscription

fun Store<AppState, Actions, Enviroment>.collect(selector: (AppState) -> Unit): Subscription =
    subscribe(selector)
