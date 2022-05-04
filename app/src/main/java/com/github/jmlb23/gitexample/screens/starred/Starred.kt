package com.github.jmlb23.gitexample.screens.starred

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.rememberCoroutineScope
import androidx.navigation.NavHostController
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.screens.widgets.ReposList
import com.github.jmlb23.gitexample.state.StarredRepositoriesActions
import kotlinx.coroutines.launch

@Composable
fun Starred(navHostController: NavHostController) {
	val store = LocalStore.current
	val repos by store.collectAsState() { it.starred.starred }
	val scope = rememberCoroutineScope()

	LaunchedEffect(key1 = repos) {
		if (repos.isEmpty()) store.dispatch(StarredRepositoriesActions.GetRepositories)
	}

	ReposList(navHostController, repos, "Starred Repositories") {
		scope.launch {
			store.dispatch(StarredRepositoriesActions.GetRepositories)
		}
	}
}