plugins {
    kotlin("multiplatform")
    kotlin("plugin.serialization") version "1.6.10"
    id("com.codingfeline.buildkonfig")
    id("io.realm.kotlin") version "0.10.2"
}


kotlin {
    jvm()
    ios()
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(project(":domain"))
                implementation("io.ktor:ktor-client-core:2.0.0")
                implementation("io.ktor:ktor-client-cio:2.0.0")
                implementation("io.ktor:ktor-client-serialization:2.0.0")
                implementation("io.ktor:ktor-client-content-negotiation:2.0.0")
                implementation("io.ktor:ktor-serialization-kotlinx-json:2.0.0")
                implementation("io.ktor:ktor-utils:2.0.0")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.1-native-mt")
                implementation("io.insert-koin:koin-core:3.2.0-beta-1")
                api("com.russhwolf:multiplatform-settings-no-arg:0.8.1")
                implementation("io.realm.kotlin:library-base:0.10.2")
                implementation(kotlin("stdlib"))
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(":domain")
                implementation(kotlin("stdlib"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.6.0")
            }
        }
    }
}

buildkonfig {
    packageName = "com.github.jmlb23.gitexample"

    defaultConfigs {
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "REDIR_URI",
            "com.github.jmlb23.gitexample://example"
        )
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "AUTH_URI",
            "https://github.com/login/oauth/authorize"
        )
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "TOKEN_URI",
            "https://github.com/login/oauth/access_token"
        )

        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "CLIENT_ID",
            project.findProperty("CLIENT_ID").toString()
        )
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "SECRET",
            project.findProperty("SECRET").toString()
        )
    }

    defaultConfigs("dev") {
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "REDIR_URI",
            "com.github.jmlb23.gitexample://example"
        )
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "AUTH_URI",
            "https://github.com/login/oauth/authorize"
        )
        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "TOKEN_URI",
            "https://github.com/login/oauth/access_token"
        )

        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "CLIENT_ID",
            project.findProperty("CLIENT_ID").toString()
        )

        buildConfigField(
            com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING,
            "SECRET",
            project.findProperty("SECRET").toString()
        )
    }


}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
    kotlinOptions {
        jvmTarget = "1.8"
    }
}