package com.github.jmlb23.gitexample.state

import com.russhwolf.settings.KeychainSettings
import com.russhwolf.settings.Settings
import org.koin.dsl.module

actual val diPlatform
    get() = module {
        single {
            object : Settings.Factory {
                override fun create(name: String?): Settings {
                    val preferencesName = name ?: "enc_preferences"
                    return KeychainSettings(preferencesName)
                }
            }.create()
        }
    }

