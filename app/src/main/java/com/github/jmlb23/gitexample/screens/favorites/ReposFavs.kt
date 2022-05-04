package com.github.jmlb23.gitexample.screens.favorites

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.material.TextButton
import androidx.compose.material.TextField
import androidx.compose.material.TextFieldDefaults
import androidx.compose.material.TopAppBar
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material.icons.filled.Search
import androidx.compose.material.icons.outlined.AddCircle
import androidx.compose.material.icons.outlined.Close
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.itemsOrEmpty
import com.github.jmlb23.gitexample.screens.widgets.FullScreenDialog
import com.github.jmlb23.gitexample.state.FavoritesActions
import com.github.jmlb23.gitexample.state.RepositoriesActions
import com.github.jmlb23.gitexample.ui.theme.CustomBlue
import com.google.accompanist.placeholder.PlaceholderHighlight
import com.google.accompanist.placeholder.material.placeholder

import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

@Composable
fun FavoritesScreen(navHostController: NavHostController) {
	val (search, setSearch) = remember { mutableStateOf("") }
	val store = LocalStore.current
	val scope = rememberCoroutineScope()
	val allRepos = store.collectAsState() {
		it.repos.repos
	}

	val repos by store.collectAsState() {
		allRepos.value.filter { it.name?.contains(search, true) ?: false }
	}

	val favorites by store.collectAsState() { fav -> allRepos.value.filter { it.id.toString() in fav.favorites.favorites.map { it.id } } }

	LaunchedEffect(key1 = repos, favorites) {
		if (repos.isEmpty()) store.dispatch(RepositoriesActions.GetRepositories)
		if (favorites.isEmpty()) store.dispatch(FavoritesActions.GetFavorites)
	}

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
						"Favoritos",
						style = MaterialTheme.typography.h6,
						modifier = Modifier.padding(start = 10.dp),
						color = MaterialTheme.colors.secondary
					)
					Spacer(modifier = Modifier.weight(1f))
					TextButton({

					}) {
						Text(text = "Save", color = Color.CustomBlue)
					}
				}
				Row {
					TextField(
						value = search,
						onValueChange = setSearch,
						placeholder = { Text(text = "Search Repository", modifier = Modifier.padding(start = 10.dp)) },
						modifier = Modifier
							.fillMaxWidth(),
						colors = TextFieldDefaults.textFieldColors(
							backgroundColor = Color.Transparent,
							focusedIndicatorColor = Color.Transparent,
							unfocusedIndicatorColor = Color.Transparent,
							disabledIndicatorColor = Color.Transparent,
							cursorColor = Color.CustomBlue
						),
						leadingIcon = {
							Icon(
								imageVector = Icons.Default.Search,
								contentDescription = "Back",
								tint = MaterialTheme.colors.secondary,
								modifier = Modifier.padding(start = 10.dp)
							)
						}
					)
				}

				Column {
					LazyColumn {
						item {
							Text(
								style = MaterialTheme.typography.h5,
								text = "Selected Repositories",
								modifier = Modifier.padding(10.dp),
								color = MaterialTheme.colors.secondary
							)
						}
						itemsOrEmpty(
							count = favorites.size,
							empty = {
								Text(
									text = "No favorites to show",
									modifier = Modifier.padding(10.dp),
									color = MaterialTheme.colors.secondaryVariant
								)
							},
							nonEmpty = {
								favorites[it].let {
									RepoItem(
										it.owner.avatarURL ?: "",
										it.owner.login ?: "",
										it.name ?: "",
										Modifier
									) {
										IconButton(onClick = {
											scope.launch(Dispatchers.IO) {
												store.dispatch(FavoritesActions.RemoveFavorite(it.id.toString()))
											}
										}) {
											Icon(
												imageVector = Icons.Outlined.Close,
												contentDescription = "Add to Favs", tint = Color.CustomBlue,
											)
										}
									}
								}
							}
						)
						item {
							Text(
								style = MaterialTheme.typography.h5,
								text = "Repositories",
								modifier = Modifier.padding(10.dp),
								color = MaterialTheme.colors.secondary
							)
						}
						itemsOrEmpty(
							count = (repos - favorites).size,
							empty = {
								Text(
									text = "No matches found.",
									modifier = Modifier.padding(10.dp),
									color = MaterialTheme.colors.secondaryVariant
								)
							},
							nonEmpty = {
								(repos - favorites)[it].let {
									RepoItem(it.owner.avatarURL ?: "", it.owner.login ?: "", it.name ?: "", Modifier) {
										IconButton(onClick = {
											scope.launch(Dispatchers.IO) {
												store.dispatch(FavoritesActions.SetFavorite(it.id.toString()))
											}
										}, Modifier) {
											Icon(
												imageVector = Icons.Outlined.AddCircle,
												contentDescription = "Add to Favs", tint = Color.CustomBlue,
											)
										}
									}
								}
							}
						)
					}
				}
			}
		}
	}
}