package com.github.jmlb23.gitexample.screens.home

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp

@Composable
fun MyWorkItem(
	text: String,
	icon: ImageVector,
	color: Color,
	modifier: Modifier = Modifier,
	onClick: () -> Unit = {},
	content: @Composable () -> Unit = {}
) {
	Row(
		modifier
			.padding(top = 5.dp, bottom = 5.dp)
			.clickable { onClick() }
			.fillMaxWidth(),
		verticalAlignment = Alignment.CenterVertically
	) {
		Card(
			elevation = 5.dp,
			modifier = Modifier
				.clip(
					RoundedCornerShape(5.dp)
				)
				.padding(7.5.dp)
		) {
			Image(
				imageVector = icon,
				contentDescription = "",
				Modifier
					.background(color)
					.padding(5.dp),
				colorFilter = ColorFilter.tint(Color.White)
			)
		}
		Spacer(modifier = Modifier.padding(10.dp))
		Text(text = text, color = MaterialTheme.colors.secondary)
		Spacer(modifier = Modifier.weight(1f))
		content()
	}
}

@Composable
@Preview
fun MyWorkItemPreview() {
	MyWorkItem(text = "example", icon = Icons.Default.Check, color = Color.Red)
}