package com.github.jmlb23.gitexample.screens.profile

import android.util.Log
import androidx.compose.animation.AnimatedVisibility
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyRow
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.Divider
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Place
import androidx.compose.material.icons.outlined.Favorite
import androidx.compose.material.icons.outlined.Person
import androidx.compose.material.icons.outlined.Star
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import coil.compose.AsyncImage
import coil.request.ImageRequest
import coil.transform.CircleCropTransformation
import com.github.jmlb23.gitexample.LocalStore
import com.github.jmlb23.gitexample.collectAsState
import com.github.jmlb23.gitexample.screens.home.MyWorkItem
import com.github.jmlb23.gitexample.shimmer
import com.github.jmlb23.gitexample.state.ProfileActions
import com.github.jmlb23.gitexample.ui.theme.CustomGray
import com.github.jmlb23.gitexample.ui.theme.CustomOrange
import com.google.accompanist.placeholder.PlaceholderHighlight
import com.google.accompanist.placeholder.material.placeholder
import com.google.accompanist.placeholder.shimmer

@Composable
fun Profile(navHostController: NavHostController) {

	val store = LocalStore.current

	val user by store.collectAsState() { it.userProfile.user }

	LaunchedEffect(key1 = user) {
		if (user == null)
			store.dispatch(ProfileActions.GetProfile)
	}

	Surface(
		Modifier
			.background(MaterialTheme.colors.primary)
			.fillMaxHeight()
	) {
		Column {
			ProfileBar()
			Column(
				modifier = Modifier.background(MaterialTheme.colors.primaryVariant)
			) {
				Row(verticalAlignment = Alignment.CenterVertically) {
					AsyncImage(
						model = ImageRequest.Builder(LocalContext.current)
							.data(user?.avatarURL ?: "")
							.crossfade(true)
							.transformations(CircleCropTransformation())
							.build(),
						contentDescription = "",
						modifier = Modifier
							.padding(10.dp)
							.clip(CircleShape)
							.size(72.dp)
							.shimmer(user == null)
					)
					Text(
						text = user?.login ?: "", modifier = Modifier
							.padding(10.dp)
							.shimmer(user == null), color = MaterialTheme.colors.secondary
					)
				}
				Card(
					Modifier
						.clip(RoundedCornerShape(5.dp))
						.fillMaxWidth()
						.padding(10.dp)
				) {
					AnimatedVisibility(visible = user?.bio.orEmpty().isNotEmpty()) {
						Text(
							text = user?.bio ?: "",
							color = MaterialTheme.colors.secondary,
							style = MaterialTheme.typography.subtitle1,
							modifier = Modifier
								.background(MaterialTheme.colors.onPrimary)
								.padding(10.dp)
								.shimmer(user == null)

						)
					}
				}
				Row(
					verticalAlignment = Alignment.CenterVertically,
					modifier = Modifier
						.padding(10.dp)
				) {
					Image(
						imageVector = Icons.Outlined.Person,
						contentDescription = "Person",
						colorFilter = ColorFilter.tint(MaterialTheme.colors.secondaryVariant),
						modifier = Modifier.padding(end = 5.dp)
					)
					Text(
						"${user?.followers ?: 0}",
						fontWeight = FontWeight.Bold,
						modifier = Modifier.shimmer(user == null)

					)
					Text(
						"followers", modifier = Modifier
							.padding(start = 5.dp)
							.placeholder(
								visible = user == null,
								color = Color.Gray,
								// optional, defaults to RectangleShape
								shape = RoundedCornerShape(4.dp),
								highlight = PlaceholderHighlight.shimmer(
									highlightColor = Color.LightGray,
								),
							)
					)
					Text("-", Modifier.padding(start = 5.dp, end = 5.dp))
					Text(
						"${user?.following ?: 0}",
						fontWeight = FontWeight.Bold
					)
					Text(
						"following", modifier = Modifier
							.padding(start = 5.dp)
							.shimmer(user == null)
					)
				}
			}
			Column(
				modifier = Modifier
					.padding(top = 20.dp)
					.background(MaterialTheme.colors.primaryVariant)
					.fillMaxWidth()
			) {
				Row(modifier = Modifier.padding(10.dp), verticalAlignment = Alignment.CenterVertically) {
					Image(
						imageVector = Icons.Outlined.Favorite,
						contentDescription = "Person",
						colorFilter = ColorFilter.tint(MaterialTheme.colors.secondaryVariant),
						modifier = Modifier.padding(end = 10.dp)
					)
					Text(
						"Pinned",
						fontWeight = FontWeight.Bold
					)
				}
				LazyRow(Modifier.shimmer(user == null)) {
					items(user?.pinned.orEmpty().size) {
						PinnedRepoElement(user, user?.pinned?.get(it), onClick = { Log.d("CLICKER", it.name ?: "") })
					}
				}
				Divider(
					Modifier
						.background(MaterialTheme.colors.primaryVariant)
						.padding(top = 10.dp)
				)
				Column {
					MyWorkItem(text = "Repositories", icon = Icons.Default.Place, color = Color.CustomGray, onClick = {
						navHostController.navigate("/repos")
					}) {
						Text(
							text = user?.totalRepos.toString(),
							modifier = Modifier
								.padding(end = 10.dp)
								.shimmer(user == null)

						)
					}
					MyWorkItem(text = "Organizations", icon = Icons.Default.Place, color = Color.CustomOrange) {
						Text(
							text = user?.totalOrganizations.toString(), modifier = Modifier
								.padding(end = 10.dp)
								.shimmer(user == null)
						)

					}
					MyWorkItem(text = "Starred", icon = Icons.Outlined.Star, color = Color.Yellow, onClick = {
						navHostController.navigate("/starred")
					}) {
						Text(
							text = user?.starts.toString(), modifier = Modifier
								.padding(end = 10.dp)
								.shimmer(user == null)
						)
					}
				}
			}
		}
	}
}

@Preview
@Composable
fun ProfilePreview() {
	Profile(rememberNavController())
}