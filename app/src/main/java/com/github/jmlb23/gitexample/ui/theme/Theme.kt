package com.github.jmlb23.gitexample.ui.theme

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material.MaterialTheme
import androidx.compose.material.darkColors
import androidx.compose.material.lightColors
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import com.google.accompanist.systemuicontroller.rememberSystemUiController

private val DarkColorPalette = darkColors(
	primary = Color.Black,
	primaryVariant = Color.DarkGray,
	secondary = Color.White,
	secondaryVariant = Color.LightGray,
	onPrimary = Color(0x70D5D5D5)
)

private val LightColorPalette = lightColors(
	primary = Color.White,
	primaryVariant = Color.LightGray,
	secondary = Color.Black,
	secondaryVariant = Color.DarkGray,
	onPrimary = Color(0x0D000000)
)

@Composable
fun GitExampleTheme(darkTheme: Boolean = isSystemInDarkTheme(), content: @Composable () -> Unit) {
	val systemUiController = rememberSystemUiController()
	val colors = if (darkTheme) {
		DarkColorPalette

	} else {
		LightColorPalette
	}
	systemUiController.setSystemBarsColor(
		color = colors.primary
	)

	MaterialTheme(
		colors = colors,
		typography = Typography,
		shapes = Shapes,
		content = content
	)
}