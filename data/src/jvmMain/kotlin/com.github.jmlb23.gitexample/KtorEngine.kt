package com.github.jmlb23.gitexample

import io.ktor.client.engine.*
import io.ktor.client.engine.cio.*

actual fun ktorEngine(): HttpClientEngineFactory<HttpClientEngineConfig> = CIO