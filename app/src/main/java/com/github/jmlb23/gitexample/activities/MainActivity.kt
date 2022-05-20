package com.github.jmlb23.gitexample.activities

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.Composable
import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.ui.tooling.preview.Preview
import androidx.core.splashscreen.SplashScreen.Companion.installSplashScreen
import androidx.lifecycle.lifecycleScope
import com.github.jmlb23.gitexample.LocalEncryptedPreferences
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.LocalOauth
import com.github.jmlb23.gitexample.data.api.oauth.Oauth
import com.github.jmlb23.gitexample.screens.App
import com.github.jmlb23.gitexample.state.Actions
import com.github.jmlb23.gitexample.state.AppState
import com.github.jmlb23.gitexample.state.Enviroment
import com.github.jmlb23.gitexample.redux.*
import com.russhwolf.settings.Settings
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import org.koin.android.ext.android.inject

class MainActivity : ComponentActivity() {

	private val preferences: Settings by inject()
	private val oauth: Oauth by inject()
	private val enviroment: Enviroment by inject()
	private val store: Store<AppState, Actions, Enviroment> by inject()

	override fun onNewIntent(intent: Intent?) {
		super.onNewIntent(intent)
		val state = intent?.data?.getQueryParameter("state")
		val code = intent?.data?.getQueryParameter("code")
		lifecycleScope.launch(Dispatchers.IO) {
			oauth.requestToken(code = code.orEmpty(), state = state.orEmpty()).fold({
				preferences.putString("token", it.orEmpty())
			}, {
				Log.e("ERROR", it.message, it)
			})
		}
	}

	override fun onCreate(savedInstanceState: Bundle?) {
		super.onCreate(savedInstanceState)
		installSplashScreen()
		setContent {
			CompositionLocalProvider(
				LocalOauth provides oauth,
				LocalEncryptedPreferences provides preferences,
				LocalStore provides store,
			) {
				App()
			}
		}
	}


}

@Preview(showBackground = true)
@Composable
fun DefaultPreview() {
	App()
}