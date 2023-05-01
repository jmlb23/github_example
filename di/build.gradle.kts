
plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("dev.icerock.moko.kswift")
}

kotlin {

    android()
    ios {
        binaries {
            framework {
                export(project(":redux"))
                export(project(":state"))
                export(project(":domain"))
                freeCompilerArgs = freeCompilerArgs + "-Xlazy-ir-for-caches=disable"
                baseName = "Shared"
            }
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":state"))
                api(project(":data"))
                api(project(":domain"))
                api(project(":redux"))
                implementation(kotlin("stdlib"))
                implementation("io.ktor:ktor-client-core:2.0.0")
                implementation("io.ktor:ktor-client-cio:2.0.0")
                implementation("co.touchlab:kermit:0.1.8")
                implementation("io.ktor:ktor-client-serialization:2.0.0")
                implementation("io.ktor:ktor-client-content-negotiation:2.0.0")
                implementation("io.ktor:ktor-serialization-kotlinx-json:2.0.0")
                implementation("io.ktor:ktor-utils:2.0.0")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1-native-mt")
                implementation("io.insert-koin:koin-core:3.2.0")
                api("com.russhwolf:multiplatform-settings-no-arg:0.9")
                implementation("io.realm.kotlin:library-base:0.10.2")
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
        val androidMain by getting {
            dependencies {
                dependsOn(commonMain)
                implementation("io.insert-koin:koin-android:3.2.0")
                implementation("androidx.security:security-crypto:1.0.0")
            }
        }

        val iosMain by getting {
            dependencies {
                dependsOn(commonMain)
            }
        }

        val iosTest by getting {
            dependencies {
                dependsOn(commonTest)
            }
        }
    }
}

kswift {
    install(dev.icerock.moko.kswift.plugin.feature.SealedToSwiftEnumFeature.factory)
    install(dev.icerock.moko.kswift.plugin.feature.PlatformExtensionFunctionsFeature.factory)
}

android {
    compileSdk = 31
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdk = 21
        targetSdk = 31
    }
    namespace = "com.github.jmlb23.gitexample.di"
}
