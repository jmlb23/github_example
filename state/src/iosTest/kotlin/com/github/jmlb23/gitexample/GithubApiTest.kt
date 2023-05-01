package com.github.jmlb23.gitexample

import com.github.jmlb23.gitexample.state.CommonComponent
import com.github.jmlb23.gitexample.state.initKoin
import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertTrue

class ComponentTest {

	@Test
	fun testNotifications() {
		runTest {
			initKoin()
			assertTrue(CommonComponent().oauth.getUrlLaunchFlow().isNotEmpty(), "Should be not empty")
		}
	}
}