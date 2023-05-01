plugins {
	kotlin("multiplatform")
}

kotlin {
	jvm()
	ios()
	sourceSets {
		val commonMain by getting {
			dependencies {
				implementation("org.jetbrains.kotlinx:atomicfu:0.17.2")
				implementation("co.touchlab:stately-collections:1.2.0")
				implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1-native-mt")
				implementation(kotlin("stdlib"))
			}
		}
		val commonTest by getting {
			dependencies {
				implementation(kotlin("stdlib"))
				implementation(kotlin("test-common"))
				implementation(kotlin("test"))
				implementation(kotlin("test-annotations-common"))
				implementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.6.1")
			}
		}
	}
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
	kotlinOptions {
		jvmTarget = "1.8"
	}
}