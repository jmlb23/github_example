package com.github.jmlb23.gitexample.screens.widgets

import androidx.compose.runtime.Composable
import androidx.compose.ui.ExperimentalComposeUiApi
import androidx.compose.ui.window.Dialog
import androidx.compose.ui.window.DialogProperties

@OptIn(ExperimentalComposeUiApi::class)
@Composable
fun FullScreenDialog(onDismiss: () -> Unit, content: @Composable () -> Unit) {
	Dialog(
		properties = DialogProperties(usePlatformDefaultWidth = false),
		onDismissRequest = onDismiss
	) {
		content()
	}
}