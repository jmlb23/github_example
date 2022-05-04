package com.github.jmlb23.gitexample

import androidx.security.crypto.EncryptedSharedPreferences
import androidx.security.crypto.MasterKeys
import com.github.jmlb23.gitexample.state.Enviroment
import com.russhwolf.settings.AndroidSettings
import com.russhwolf.settings.Settings
import org.koin.android.ext.koin.androidContext
import org.koin.androidx.viewmodel.dsl.viewModel
import org.koin.core.qualifier.qualifier
import org.koin.dsl.module

val diAndroid = module {

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
						androidContext(),
						EncryptedSharedPreferences.PrefKeyEncryptionScheme.AES256_SIV,
						EncryptedSharedPreferences.PrefValueEncryptionScheme.AES256_GCM
					)
				)
			}
		}.create()
	}

	single {
		Enviroment(
			get(qualifier("GetNotificationsUseCase")),
			get(qualifier("GetCurrentUserUseCase")),
			get(qualifier("GetRepositoriesPaginatedUseCase")),
			get(qualifier("GetStarredRepositoriesPaginatedUseCase")),
			get(qualifier("GetRepositoriesFavoritePaginatedUseCase")),
			get(qualifier("RemoveRepositoriesFavoriteUseCase")),
			get(qualifier("AddRepositoriesFavoriteUseCase"))
		)
	}
}