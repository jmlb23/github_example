package com.github.jmlb23.gitexample.ui.theme

import androidx.compose.material.Typography
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp

// Set of Material typography styles to start with
val Typography = Typography(
	body1 = TextStyle(
		fontFamily = FontFamily.Default,
		fontWeight = FontWeight.Normal,
		fontSize = 16.sp
	),
	caption = TextStyle(
		fontFamily = FontFamily.Default,
		fontWeight = FontWeight.Normal,
		fontSize = 12.sp
	),
	button = TextStyle(
		fontFamily = FontFamily.Default,
		fontWeight = FontWeight.W700,
		fontSize = 16.sp,
		fontFeatureSettings = "c2sc, smcp"

	),
)