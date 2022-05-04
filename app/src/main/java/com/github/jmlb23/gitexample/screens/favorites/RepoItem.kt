package com.github.jmlb23.gitexample.screens.favorites

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import coil.compose.AsyncImage
import coil.request.ImageRequest
import coil.transform.CircleCropTransformation
import com.google.accompanist.placeholder.PlaceholderHighlight
import com.google.accompanist.placeholder.material.placeholder


@Composable
fun RepoItem(
	url: String,
	userName: String,
	repoName: String,
	modifier: Modifier,
	content: @Composable () -> Unit
) {
	Row(verticalAlignment = Alignment.CenterVertically, modifier = modifier) {
		AsyncImage(
			model = ImageRequest.Builder(LocalContext.current)
				.data(url)
				.crossfade(true)
				.transformations(CircleCropTransformation())
				.build(),
			contentDescription = "",
			modifier = Modifier
				.padding(10.dp)
				.clip(CircleShape)
				.size(48.dp)
		)
		Column(verticalArrangement = Arrangement.Center) {
			Text(
				text = userName,
				modifier = Modifier.padding(start = 10.dp),
				color = MaterialTheme.colors.secondary,
			)
			Text(
				text = repoName,
				modifier = Modifier.padding(start = 10.dp),
				color = MaterialTheme.colors.secondary,
				style = MaterialTheme.typography.h6
			)
		}
		Spacer(modifier = Modifier.weight(1f))
		content()
	}
}