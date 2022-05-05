package com.github.jmlb23.gitexample

import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertTrue

class GithubApiTest {

	@Test
	fun testNotifications() {
		runTest {
			api.notifications("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").let {
				it.getOrDefault(emptyList()).let {
					assertTrue(it.isNotEmpty())
				}
			}
		}
	}
}