package com.github.jmlb23.gitexample

import androidx.compose.foundation.lazy.LazyItemScope
import androidx.compose.foundation.lazy.LazyListScope
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.State
import androidx.compose.runtime.derivedStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.produceState
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.github.jmlb23.gitexample.redux.Store
import com.google.accompanist.placeholder.PlaceholderHighlight
import com.google.accompanist.placeholder.material.placeholder
import com.google.accompanist.placeholder.shimmer
import kotlinx.coroutines.ensureActive
import kotlinx.coroutines.job

fun LazyListScope.itemsOrEmpty(
	count: Int,
	empty: @Composable LazyItemScope.() -> Unit,
	nonEmpty: @Composable LazyItemScope.(Int) -> Unit
) {
	if (count == 0) item { empty() }
	else items(count) { nonEmpty(it) }
}

fun Modifier.shimmer(condition: Boolean) = placeholder(
	visible = condition,
	color = Color.Gray,
	shape = RoundedCornerShape(4.dp),
	highlight = PlaceholderHighlight.shimmer(
		highlightColor = Color.LightGray,
	),
)

@Composable
fun <S, A, E, I> Store<S, A, E>.collectAsState(selector: (S) -> I): State<I> {
	return produceState(initialValue = selector(state()), ::subscribe, ::unsubscribe, selector) {
		val subscription = subscribe {
			value = selector(it)
		}
		awaitDispose {
			unsubscribe(subscription)
		}
	}
}