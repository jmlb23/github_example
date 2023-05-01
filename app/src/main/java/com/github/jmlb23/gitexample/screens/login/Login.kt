package com.github.jmlb23.gitexample.screens.login

import android.content.Intent
import android.net.Uri
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Button
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.github.jmlb23.gitexample.LocalOauth
import com.github.jmlb23.gitexample.R
import com.github.jmlb23.gitexample.ui.theme.GitExampleTheme
import kotlinx.coroutines.launch


@Composable
fun Login() {
	val oauth = LocalOauth.current
	val context = LocalContext.current
	val scope = rememberCoroutineScope()

	GitExampleTheme {
		Surface(color = MaterialTheme.colors.secondary) {
			Column(modifier = Modifier.fillMaxHeight(), verticalArrangement = Arrangement.SpaceBetween) {
				Spacer(modifier = Modifier)
				Image(
					painter = painterResource(id = R.drawable.github),
					contentDescription = "",
					modifier = Modifier
						.align(Alignment.CenterHorizontally)
						.padding(120.dp)
				)
				Column(modifier = Modifier.padding(10.dp)) {
					Button(onClick = {
						context.startActivity(Intent(Intent.ACTION_VIEW, Uri.parse(oauth.getUrlLaunchFlow())))
					}, modifier = Modifier.fillMaxWidth()) {
						Text(text = "Sign in with github", color = MaterialTheme.colors.secondary)
					}
					Spacer(modifier = Modifier.height(10.dp))
				}
			}
		}
	}
}


@Preview
@Composable
fun PreviewLogin() {
	Login()
}