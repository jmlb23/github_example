package com.github.jmlb23.gitexample.screens.notifications

import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Button
import androidx.compose.material.ButtonDefaults
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.shimmer
import com.github.jmlb23.gitexample.state.NotificationsActions
import com.github.jmlb23.gitexample.ui.theme.GitExampleTheme
import com.google.accompanist.placeholder.PlaceholderHighlight
import com.google.accompanist.placeholder.material.placeholder
import com.google.accompanist.placeholder.shimmer

import kotlinx.coroutines.launch

@Composable
fun Notifications() {
	val store = LocalStore.current
	val scope = rememberCoroutineScope()
	val list by store.collectAsState(){ it.notifications.notification }
	val page by store.collectAsState(){ it.notifications.currentPage }
	val listState = rememberLazyListState(initialFirstVisibleItemIndex = 1)

	LaunchedEffect(key1 = page) {
		if (page == 1)
			store.dispatch(NotificationsActions.GetNotifications)
	}

	Surface(
		modifier = Modifier
			.fillMaxHeight()
			.fillMaxWidth()
	) {
		LazyColumn(state = listState) {
			if (list.isEmpty()) items(20) {
				Card(
					modifier = Modifier
						.fillMaxWidth()
						.padding(5.dp)
						.shimmer(true)
						.padding(40.dp)
				) {}
			}
			else items(list.size) {
				list[it].let {
					NotificationItem(
						NotificationVO(
							type = it.reason.orEmpty(),
							organization = it.repository.owner.login.orEmpty(),
							repo = it.repository.name.orEmpty(),
							issue = "#${it.subject.url?.split("/")?.lastOrNull().orEmpty()}",
							time = it.updatedAt.orEmpty(),
							title = it.subject.title.orEmpty(),
							!it.unread
						)
					)
				}
			}
			item {
				Button(onClick = {
					scope.launch {
						store.dispatch(NotificationsActions.GetNotifications)
					}
				}, colors = ButtonDefaults.buttonColors(backgroundColor = MaterialTheme.colors.primaryVariant)) {
					Text(
						text = "Load more",
						color = MaterialTheme.colors.secondary,
						modifier = Modifier.fillMaxWidth(),
						textAlign = TextAlign.Center,
					)
				}
			}
		}
	}
}

@Preview
@Composable
fun PreviewNotifications() {
	GitExampleTheme {
		Notifications()
	}
}

