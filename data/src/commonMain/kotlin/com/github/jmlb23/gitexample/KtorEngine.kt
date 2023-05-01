package com.github.jmlb23.gitexample

import io.ktor.client.engine.*

expect fun ktorEngine(): HttpClientEngineFactory<HttpClientEngineConfig>