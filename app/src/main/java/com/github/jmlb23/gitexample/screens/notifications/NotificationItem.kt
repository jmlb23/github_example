package com.github.jmlb23.gitexample.screens.notifications

import androidx.compose.animation.AnimatedVisibility
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.Divider
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowForward
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.github.jmlb23.gitexample.ui.theme.CustomBlue
import com.github.jmlb23.gitexample.ui.theme.CustomBlueTransparent
import com.github.jmlb23.gitexample.ui.theme.CustomBlueLight
import com.github.jmlb23.gitexample.ui.theme.CustomGreen
import com.github.jmlb23.gitexample.ui.theme.GitExampleTheme
import java.text.SimpleDateFormat
import java.util.*


data class NotificationVO(
	val type: String,
	val organization: String,
	val repo: String,
	val issue: String,
	val time: String,
	val title: String,
	val isReaded: Boolean
)

@Composable
fun NotificationItem(notification: NotificationVO) {
	Column(Modifier.padding(10.dp)) {
		Row(Modifier.padding(5.dp)) {
			Image(
				imageVector = Icons.Default.ArrowForward,
				contentDescription = "",
				colorFilter = ColorFilter.tint(Color.CustomGreen),
				modifier = Modifier.align(Alignment.CenterVertically)
			)
			Spacer(modifier = Modifier.weight(0.2f))
			Text(
				notification.organization,
				modifier = Modifier.align(Alignment.CenterVertically),
				color = MaterialTheme.colors.primaryVariant
			)
			Spacer(modifier = Modifier.weight(0.1f))
			Text("/", modifier = Modifier.align(Alignment.CenterVertically), color = MaterialTheme.colors.secondary)
			Spacer(modifier = Modifier.weight(0.1f))
			Text(
				notification.repo,
				modifier = Modifier.align(Alignment.CenterVertically),
				color = MaterialTheme.colors.primaryVariant
			)
			Spacer(modifier = Modifier.weight(0.1f))
			Text(
				notification.issue,
				modifier = Modifier.align(Alignment.CenterVertically),
				color = MaterialTheme.colors.primaryVariant
			)
			Spacer(modifier = Modifier.weight(0.95f))
			Text(
				toHours(notification.time),
				modifier = Modifier.align(Alignment.CenterVertically),
				color = MaterialTheme.colors.primaryVariant
			)
		}
		Row(Modifier.padding(5.dp)) {
			Column(
				horizontalAlignment = Alignment.Start,
				modifier = Modifier
					.weight(1f)
					.padding(start = 5.dp, top = 7.5.dp)
			) {
				AnimatedVisibility(visible = !notification.isReaded) {
					Box(
						Modifier
							.background(Color.CustomBlue, CircleShape)
							.padding(5.dp)
					)
				}
			}
			Text(
				text = notification.title,
				modifier = Modifier
					.weight(8f)
					.padding(end = 5.dp),
				textAlign = TextAlign.Justify,
				color = MaterialTheme.colors.secondary
			)
			Card(
				backgroundColor = Color.CustomBlueTransparent,
				modifier = Modifier
					.padding(start = 5.dp, top = 5.dp)
					.weight(1f),
				elevation = 0.dp
			) {
				Text(
					text = "4",
					textAlign = TextAlign.Center,
					modifier = Modifier
						.clip(RoundedCornerShape(5.dp))
						.padding(horizontal = 1.dp, vertical = 5.dp),
					color = Color.CustomBlueLight
				)
			}
		}
	}
	Divider(Modifier.background(MaterialTheme.colors.secondary))
}

private fun toHours(time: String): String =
	((System.currentTimeMillis() -
			(SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss").parse(time)?.time ?: 0))).let {
		"${it / 3600000} h ${(it % 3600) / 60} m"
	}


@Preview
@Composable
fun NotificationItemPreview() {
	GitExampleTheme {
		NotificationItem(
			NotificationVO(
				"",
				"apache",
				"hadoop",
				"#35678",
				"10m",
				"a".repeat(1000),
				false
			)
		)
	}
}