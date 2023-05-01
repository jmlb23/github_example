package com.github.jmlb23.gitexample

import io.ktor.client.engine.*
import io.ktor.client.engine.darwin.*

actual fun ktorEngine(): HttpClientEngineFactory<HttpClientEngineConfig> = Darwin