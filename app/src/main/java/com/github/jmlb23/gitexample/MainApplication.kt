package com.github.jmlb23.gitexample

import android.app.Application
import com.github.jmlb23.gitexample.di.CommonComponent
import org.koin.android.ext.koin.androidContext

class MainApplication : Application() {

	override fun onCreate() {
		super.onCreate()
		CommonComponent.initKoin{
			androidContext(this@MainApplication)
		}
	}
}