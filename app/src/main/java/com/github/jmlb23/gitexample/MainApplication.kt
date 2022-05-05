package com.github.jmlb23.gitexample

import android.app.Application
import com.github.jmlb23.gitexample.state.diState
import org.koin.android.ext.koin.androidContext
import org.koin.core.context.startKoin

class MainApplication : Application() {

	override fun onCreate() {
		super.onCreate()
		startKoin {
			androidContext(this@MainApplication)
			modules(diData, diState)
		}
	}
}