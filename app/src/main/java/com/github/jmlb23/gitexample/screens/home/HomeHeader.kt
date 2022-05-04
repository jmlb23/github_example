package com.github.jmlb23.gitexample.screens.home

import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material.IconButton
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Search
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.github.jmlb23.gitexample.R

@Composable
fun HomeHeader(text: String, modifier: Modifier, onClick: () -> Unit) {
	Row(verticalAlignment = Alignment.CenterVertically, modifier = modifier) {
		Text(
			text = text,
			modifier = Modifier
				.padding(top = 10.dp, bottom = 10.dp)
				.align(Alignment.CenterVertically),
			style = MaterialTheme.typography.h6,
			color = MaterialTheme.colors.secondary
		)
		Spacer(modifier = Modifier.weight(1f))
		IconButton(onClick = onClick, Modifier.size(24.dp)) {
			Image(
				painter = painterResource(id = R.drawable.dots),
				contentDescription = "",
				modifier = Modifier
					.align(Alignment.CenterVertically),
				colorFilter = ColorFilter.tint(Color.LightGray)
			)
		}

	}
}