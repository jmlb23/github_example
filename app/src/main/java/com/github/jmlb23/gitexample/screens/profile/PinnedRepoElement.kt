package com.github.jmlb23.gitexample.screens.profile

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.outlined.Star
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.dp
import coil.compose.AsyncImage
import coil.request.ImageRequest
import coil.transform.CircleCropTransformation
import com.github.jmlb23.gitexample.domain.PinnedRepo
import com.github.jmlb23.gitexample.domain.User
import com.github.jmlb23.gitexample.ui.theme.CustomYellow

@Composable
fun PinnedRepoElement(user: User?, pinnedRepo: PinnedRepo?, onClick: (PinnedRepo) -> Unit) {
	Card(
		Modifier
			.padding(5.dp)
			.width(300.dp)
			.clickable { pinnedRepo?.let(onClick) }
	) {
		Column(Modifier.padding(10.dp)) {
			Row(verticalAlignment = Alignment.CenterVertically) {
				AsyncImage(
					model = ImageRequest.Builder(LocalContext.current)
						.data(user?.avatarURL ?: "")
						.crossfade(true)
						.transformations(CircleCropTransformation())
						.build(),
					contentDescription = "",
					modifier = Modifier
						.clip(CircleShape)
						.size(24.dp)
				)
				Text(
					text = user?.login ?: "",
					modifier = Modifier.padding(5.dp),
					color = MaterialTheme.colors.secondary
				)
			}
			Text(text = pinnedRepo?.name ?: "", style = MaterialTheme.typography.h6)
			Text(
				text = pinnedRepo?.description ?: "",
				style = MaterialTheme.typography.subtitle1,
				maxLines = 1,
				overflow = TextOverflow.Ellipsis,
				modifier = Modifier.padding(top = 5.dp)
			)
			Row(verticalAlignment = Alignment.CenterVertically, modifier = Modifier.padding(top = 20.dp)) {
				Image(
					imageVector = Icons.Outlined.Star,
					contentDescription = "Person",
					colorFilter = ColorFilter.tint(Color.CustomYellow),
					modifier = Modifier.padding(end = 5.dp)
				)
				pinnedRepo?.let {
					Text(
						text = it.starts ?: "",
						modifier = Modifier.padding(end = 5.dp)
					)
					Box(
						Modifier
							.padding(end = 10.dp)
							.background(
								Color(android.graphics.Color.parseColor(it.langColor)), CircleShape
							)
							.padding(5.dp)
					)
					Text(
						text = it.lang ?: "",
						modifier = Modifier.padding(end = 5.dp)
					)
				}
			}
		}
	}
}
