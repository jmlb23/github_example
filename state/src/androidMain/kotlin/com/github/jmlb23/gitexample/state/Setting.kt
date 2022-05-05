package com.github.jmlb23.gitexample.state

import androidx.security.crypto.EncryptedSharedPreferences
import androidx.security.crypto.MasterKeys
import com.russhwolf.settings.AndroidSettings
import com.russhwolf.settings.Settings
import org.koin.android.ext.koin.androidApplication
import org.koin.dsl.module

actual val diPlatform
    get() = module {
        single {
            object : Settings.Factory {
                private val keyGenParameterSpec = MasterKeys.AES256_GCM_SPEC
                private val mainKeyAlias = MasterKeys.getOrCreate(keyGenParameterSpec)

                override fun create(name: String?): Settings {
                    val preferencesName = name ?: "enc_preferences"

                    return AndroidSettings(
                        EncryptedSharedPreferences.create(
                            preferencesName,
                            mainKeyAlias,
                            androidApplication(),
                            EncryptedSharedPreferences.PrefKeyEncryptionScheme.AES256_SIV,
                            EncryptedSharedPreferences.PrefValueEncryptionScheme.AES256_GCM
                        )
                    )
                }
            }.create()
        }
    }

