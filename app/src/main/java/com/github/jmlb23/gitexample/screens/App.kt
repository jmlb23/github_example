package com.github.jmlb23.gitexample.screens

import androidx.compose.foundation.layout.Column
import androidx.compose.material.BottomNavigation
import androidx.compose.material.BottomNavigationItem
import androidx.compose.material.Icon
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Home
import androidx.compose.material.icons.filled.Notifications
import androidx.compose.material.icons.filled.Person
import androidx.compose.material.icons.filled.Search
import androidx.compose.runtime.Composable
import androidx.compose.runtime.State
import androidx.compose.runtime.getValue
import androidx.compose.runtime.produceState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.currentBackStackEntryAsState
import androidx.navigation.compose.rememberNavController
import com.github.jmlb23.gitexample.LocalEncryptedPreferences
import com.github.jmlb23.gitexample.screens.explore.Explore
import com.github.jmlb23.gitexample.screens.home.Home
import com.github.jmlb23.gitexample.screens.login.Login
import com.github.jmlb23.gitexample.screens.notifications.Notifications
import com.github.jmlb23.gitexample.screens.profile.Profile
import com.github.jmlb23.gitexample.screens.favorites.FavoritesScreen
import com.github.jmlb23.gitexample.screens.repos.Repos
import com.github.jmlb23.gitexample.screens.starred.Starred
import com.github.jmlb23.gitexample.ui.theme.CustomBlue
import com.github.jmlb23.gitexample.ui.theme.GitExampleTheme
import com.russhwolf.settings.AndroidSettings
import com.russhwolf.settings.addStringListener
import com.russhwolf.settings.addStringOrNullListener

@Composable
fun rememberLogin(): State<Boolean> {
	val preferences = LocalEncryptedPreferences.current
	return produceState(initialValue = false, preferences, producer = {
		preferences.let { it as? AndroidSettings }?.let {
			it.getStringOrNull("token")?.takeIf { it.isNotEmpty() }?.let {
				value = it.isNotEmpty()
			}
			it.addStringOrNullListener("token") {
				value = it.orEmpty().isNotEmpty()
			}
		}
	})
}

@Composable
fun App() {
	val navController = rememberNavController()
	val isLoggedIn by rememberLogin()

	GitExampleTheme {
		NavHost(
			navController = navController,
			startDestination = if (isLoggedIn) "/" else "/login"
		) {
			composable("/login") {
				Login()
			}
			composable("/") {
				val navControllerSubroute = rememberNavController()
				val route = navControllerSubroute.currentBackStackEntryAsState()
				Column {
					NavHost(navController = navControllerSubroute, startDestination = "/home", Modifier.weight(1f)) {
						composable("/home") {
							Home(navControllerSubroute)
						}

						composable("/notifications") {
							Notifications()
						}

						composable("/explore") {
							Explore()
						}

						composable("/profile") {
							Profile(navControllerSubroute)
						}

						composable("/repos") {
							Repos(navControllerSubroute)
						}

						composable("/starred") {
							Starred(navControllerSubroute)
						}

						composable("/favorites") {
							FavoritesScreen(navControllerSubroute)
						}

					}

					BottomNavigation(Modifier) {
						BottomNavigationItem(
							selected = route.value?.destination?.route == "/home",
							unselectedContentColor = Color.LightGray,
							selectedContentColor = Color.CustomBlue,
							onClick = { navControllerSubroute.navigate("/home") },
							icon = {
								Column {
									Icon(
										imageVector = Icons.Default.Home,
										contentDescription = "",
										Modifier.align(Alignment.CenterHorizontally),
									)
									Text(
										text = "Principal",
										style = MaterialTheme.typography.caption,
									)
								}
							},
						)

						BottomNavigationItem(
							selected = route.value?.destination?.route == "/notifications",
							unselectedContentColor = Color.LightGray,
							selectedContentColor = Color.CustomBlue,
							onClick = { navControllerSubroute.navigate("/notifications") },
							icon = {
								Column {
									Icon(
										imageVector = Icons.Default.Notifications,
										contentDescription = "",
										Modifier.align(Alignment.CenterHorizontally),
									)
									Text(
										text = "Notificaciones",
										style = MaterialTheme.typography.caption,
									)
								}
							}
						)

						BottomNavigationItem(
							selected = route.value?.destination?.route == "/explore",
							unselectedContentColor = Color.LightGray,
							selectedContentColor = Color.CustomBlue,
							onClick = { navControllerSubroute.navigate("/explore") },
							icon = {
								Column {
									Icon(
										imageVector = Icons.Default.Search,
										contentDescription = "",
										Modifier.align(Alignment.CenterHorizontally),
									)
									Text(
										text = "Explorar",
										style = MaterialTheme.typography.caption,
									)

								}
							},
						)

						BottomNavigationItem(
							selected = route.value?.destination?.route == "/profile",
							unselectedContentColor = Color.LightGray,
							selectedContentColor = Color.CustomBlue,
							onClick = { navControllerSubroute.navigate("/profile") },
							icon = {
								Column {
									Icon(
										imageVector = Icons.Default.Person,
										contentDescription = "",
										Modifier.align(Alignment.CenterHorizontally),
									)
									Text(
										text = "Perfil",
										style = MaterialTheme.typography.caption,
									)
								}
							},
						)
					}
				}
			}
		}
	}
}

@Preview
@Composable
fun AppPreview() {
	App()
}