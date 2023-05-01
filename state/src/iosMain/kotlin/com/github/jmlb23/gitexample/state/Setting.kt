package com.github.jmlb23.gitexample.state

import com.russhwolf.settings.AppleSettings
import com.russhwolf.settings.Settings
import org.koin.dsl.module
import platform.Foundation.NSUserDefaults

actual val diPlatform
    get() = module {
        single<Settings> {
            object : Settings.Factory {
                override fun create(name: String?): AppleSettings {
                    val preferencesName = name ?: "enc_preferences"
                    return AppleSettings(NSUserDefaults(preferencesName))
                }
            }.create()
        }
    }

