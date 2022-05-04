package com.github.jmlb23.gitexample.screens.repos

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.rememberCoroutineScope
import androidx.navigation.NavHostController
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.screens.widgets.ReposList
import com.github.jmlb23.gitexample.state.RepositoriesActions
import kotlinx.coroutines.launch

@Composable
fun Repos(navHostController: NavHostController) {
	val store = LocalStore.current
	val repos by store.collectAsState() { it.repos.repos }
	val scope = rememberCoroutineScope()

	LaunchedEffect(key1 = repos) {
		if (repos.isEmpty()) store.dispatch(RepositoriesActions.GetRepositories)
	}


	ReposList(navHostController, repos, "Repositories") {
		scope.launch {
			store.dispatch(RepositoriesActions.GetRepositories)
		}
	}
}