package com.github.jmlb23.gitexample.screens.widgets

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.Button
import androidx.compose.material.ButtonDefaults
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.material.TopAppBar
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.SideEffect
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.composed
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.github.jmlb23.gitexample.domain.Repository
import com.github.jmlb23.gitexample.screens.favorites.RepoItem
import com.github.jmlb23.gitexample.shimmer

@Composable
fun ReposList(
	navHostController: NavHostController,
	repos: List<Repository>,
	title: String,
	next: () -> Unit
) {
	FullScreenDialog(
		navHostController::popBackStack
	) {
		Surface(modifier = Modifier.fillMaxSize()) {
			Column {
				TopAppBar(elevation = 5.dp) {
					IconButton(onClick = {
						navHostController.popBackStack()
					}) {
						Icon(
							imageVector = Icons.Default.ArrowBack,
							contentDescription = "Back",
							tint = MaterialTheme.colors.secondary
						)
					}
					Text(
						text = title,
						style = MaterialTheme.typography.h6,
						modifier = Modifier.padding(start = 10.dp),
						color = MaterialTheme.colors.secondary,
					)
				}
				LazyColumn {
					if (repos.isEmpty()) items(10) {
						Text(
							text = "Content to display after content has loaded",
							modifier = Modifier
								.fillMaxWidth()
								.padding(5.dp)
								.shimmer(true)
								.padding(top = 56.dp)

						)
					}
					else {
						items(repos.size) {
							repos[it].let {
								RepoItem(
									it.owner.avatarURL ?: "", it.owner.login ?: "", it.name ?: "",
									Modifier
										.clickable {

										}
								) {

								}
							}
						}
						item {
							Row(
								Modifier
									.fillMaxWidth()
									.padding(), horizontalArrangement = Arrangement.Center) {
								CircularProgressIndicator(
									modifier = Modifier
										.composed {
											SideEffect(next)
											Modifier
										}, MaterialTheme.colors.secondary
								)
							}
						}
					}
				}
			}
		}
	}
}
