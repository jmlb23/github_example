package com.github.jmlb23.gitexample.screens.profile

import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Spacer
import androidx.compose.material.IconButton
import androidx.compose.material.MaterialTheme
import androidx.compose.material.TopAppBar
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.outlined.Settings
import androidx.compose.material.icons.outlined.Share
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import com.github.jmlb23.gitexample.ui.theme.CustomBlue

@Composable
fun ProfileBar() {
	TopAppBar(
		backgroundColor = MaterialTheme.colors.primaryVariant
	) {
		Spacer(modifier = Modifier.weight(1f))
		IconButton(onClick = { /*TODO*/ }) {
			Image(
				imageVector = Icons.Outlined.Share, contentDescription = "Share", colorFilter = ColorFilter.tint(
					Color.CustomBlue
				)
			)
		}
		IconButton(onClick = { /*TODO*/ }) {
			Image(
				imageVector = Icons.Outlined.Settings, contentDescription = "Settings", colorFilter = ColorFilter.tint(
					Color.CustomBlue
				)
			)
		}
	}
}