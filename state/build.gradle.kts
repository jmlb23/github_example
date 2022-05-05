plugins {
	kotlin("multiplatform")
	id("com.android.library")
}

kotlin {
	android()
	ios {
		binaries {
			framework {
				baseName = "State"
			}
		}
	}
	sourceSets {
		val commonMain by getting {
			dependencies {
				implementation(project(":redux"))
				implementation(project(":domain"))
				implementation(project(":data"))
				implementation(kotlin("stdlib"))
				implementation("io.insert-koin:koin-core:3.2.0-beta-1")
				implementation("com.russhwolf:multiplatform-settings:0.8.1")
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
		val androidMain by getting{
			dependencies {
				dependsOn(commonMain)
				implementation("io.insert-koin:koin-android:3.2.0-beta-1")
				implementation("androidx.security:security-crypto:1.0.0")
			}
		}

		val iosMain by getting{
			dependencies {
				dependsOn(commonMain)
				implementation("io.insert-koin:koin-core:3.2.0-beta-1")
			}
		}
	}
}

android {
	compileSdk = 31
	sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
	defaultConfig {
		minSdk = 21
		targetSdk = 31
	}
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
	kotlinOptions {
		jvmTarget = "1.8"
	}
}
