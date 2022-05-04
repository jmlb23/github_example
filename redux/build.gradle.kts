plugins {
	kotlin("multiplatform")
}

kotlin {
	jvm()

	sourceSets {
		val commonMain by getting {
			dependencies {
				implementation("org.jetbrains.kotlinx:atomicfu:0.17.2")
				implementation(kotlin("stdlib"))
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
