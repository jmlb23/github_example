plugins {
	kotlin("multiplatform")
}

kotlin {
	jvm()

	sourceSets {
		val commonMain by getting {
			dependencies {
				implementation(kotlin("stdlib"))
			}
		}
		val commonTest by getting {
			dependencies {
				implementation(kotlin("stdlib"))
				implementation(kotlin("test-common"))
				implementation(kotlin("test"))
				implementation(kotlin("test-annotations-common"))
			}
		}
	}
}