plugins {
	kotlin("multiplatform")
}

kotlin {
	jvm()

	sourceSets {
		val commonMain by getting {
			dependencies {
				implementation(project(":redux"))
				implementation(project(":domain"))
				implementation(kotlin("stdlib"))
				implementation( "org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0-native-mt")
				implementation("co.touchlab:kermit:0.1.8")
			}
		}
		val commonTest by getting {
			dependencies {
				implementation(kotlin("stdlib"))
				implementation(kotlin("test-common"))
				implementation(kotlin("test"))
				implementation(kotlin("test-annotations-common"))
				implementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.6.0")
			}
		}
	}
}
