package com.github.jmlb23.gitexample.screens.home

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Button
import androidx.compose.material.ButtonDefaults
import androidx.compose.material.Divider
import androidx.compose.material.IconButton
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.material.TopAppBar
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Add
import androidx.compose.material.icons.filled.CheckCircle
import androidx.compose.material.icons.filled.Search
import androidx.compose.material.icons.filled.Star
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.itemsOrEmpty
import com.github.jmlb23.gitexample.screens.favorites.RepoItem
import com.github.jmlb23.gitexample.state.FavoritesActions
import com.github.jmlb23.gitexample.state.RepositoriesActions
import com.github.jmlb23.gitexample.ui.theme.CustomBlue
import com.github.jmlb23.gitexample.ui.theme.CustomGray
import com.github.jmlb23.gitexample.ui.theme.CustomGreen
import com.github.jmlb23.gitexample.ui.theme.CustomOrange
import com.github.jmlb23.gitexample.ui.theme.CustomPurple
import com.github.jmlb23.gitexample.ui.theme.CustomYellow
import com.github.jmlb23.gitexample.ui.theme.GitExampleTheme

@Composable
fun Home(navigation: NavHostController) {
	val store = LocalStore.current

	val allRepos by store.collectAsState() {
		it.repos.repos
	}

	val favorites by store.collectAsState() { fav -> allRepos.filter { it.id.toString() in fav.favorites.favorites.map { it.id } } }

	LaunchedEffect(key1 = allRepos, favorites) {
		if (allRepos.isEmpty()) store.dispatch(RepositoriesActions.GetRepositories)
		if (favorites.isEmpty()) store.dispatch(FavoritesActions.GetFavorites)
	}

	Column(
		Modifier
			.fillMaxHeight()
	) {
		TopAppBar(elevation = 5.dp) {
			Text(
				"Home",
				style = MaterialTheme.typography.h6,
				modifier = Modifier.padding(start = 10.dp),
				color = MaterialTheme.colors.secondary
			)
			Spacer(modifier = Modifier.weight(1f))
			IconButton(onClick = { /*TODO*/ }) {
				Image(
					imageVector = Icons.Default.Search, contentDescription = "Search", colorFilter = ColorFilter.tint(
						Color.CustomBlue
					)
				)
			}
			IconButton(onClick = { /*TODO*/ }) {
				Image(
					imageVector = Icons.Default.Add, contentDescription = "Add", colorFilter = ColorFilter.tint(
						Color.CustomBlue
					)
				)
			}
		}
		Surface(
			elevation = 1.dp,
			modifier = Modifier
				.fillMaxHeight()
				.fillMaxWidth()
		) {
			LazyColumn {
				item {
					HomeHeader(text = "Issues", Modifier.padding(start = 15.dp, end = 10.dp, top = 10.dp)) {

					}
				}
				item {
					MyWorkItem(
						text = "Issues",
						icon = Icons.Default.CheckCircle,
						color = Color.CustomGreen,
						Modifier.padding(start = 10.dp)
					) {
					}
				}
				item {
					MyWorkItem(
						text = "Pull Request",
						icon = Icons.Default.CheckCircle,
						color = Color.CustomBlue,
						Modifier.padding(start = 10.dp)
					) {
					}
				}
				item {
					MyWorkItem(
						text = "Discussions",
						icon = Icons.Default.CheckCircle,
						color = Color.CustomPurple,
						Modifier.padding(start = 10.dp)
					) {
					}
				}
				item {
					MyWorkItem(
						text = "Repositories",
						icon = Icons.Default.CheckCircle,
						color = Color.CustomGray,
						Modifier.padding(start = 10.dp),
						onClick = { navigation.navigate("/repos") },
					) {

					}
				}
				item {
					MyWorkItem(
						text = "Organizations",
						icon = Icons.Default.CheckCircle,
						color = Color.CustomOrange,
						Modifier.padding(start = 10.dp)
					) {
					}
				}
				item {
					MyWorkItem(
						text = "Starred",
						icon = Icons.Default.Star,
						color = Color.CustomYellow,
						Modifier.padding(start = 10.dp),
						onClick = { navigation.navigate("/starred") },
						) {
					}
				}

				item {
					Divider(
						modifier = Modifier
							.height(1.dp)
							.background(Color.CustomGray)
					)
				}
				item {
					HomeHeader(text = "Favorites", Modifier.padding(start = 15.dp, end = 10.dp, top = 10.dp)) {
						navigation.navigate("/favorites")
					}
				}

				itemsOrEmpty(
					count = favorites.size,
					empty = {
						Column(
							modifier = Modifier.padding(10.dp),
						) {
							Text(
								text = "Add favorite repositories for quick access all any time, without having to search",
								textAlign = TextAlign.Center,
								color = MaterialTheme.colors.secondary
							)
							Button(
								onClick = {
									navigation.navigate("/favorites")
								},
								modifier = Modifier
									.fillMaxWidth()
									.padding(top = 15.dp)
									.clip(RoundedCornerShape(5.dp)),
								colors = ButtonDefaults.buttonColors(backgroundColor = MaterialTheme.colors.primaryVariant)
							) {
								Text(
									text = "Add Favorites",
									color = Color.CustomBlue,
									modifier = Modifier.padding(5.dp),
								)
							}
						}
					},
					nonEmpty = {
						Column(Modifier.padding(10.dp)) {
							favorites[it].let {
								RepoItem(
									it.owner.avatarURL ?: "",
									it.owner.login ?: "",
									it.name ?: "",
									Modifier
								) {
								}
							}
						}
					}
				)
				item {
					Divider(
						modifier = Modifier
							.padding(top = 10.dp)
							.height(1.dp)
							.background(Color.CustomGray)
					)
				}
				item {
					HomeHeader(text = "Shortcuts", Modifier.padding(start = 15.dp, end = 10.dp, top = 10.dp)) {
					}
				}
			}
		}
	}
}

@Preview
@Composable
fun HomePreview() {
	GitExampleTheme(darkTheme = true) {
		Home(rememberNavController())
	}
}