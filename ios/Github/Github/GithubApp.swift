//
//  GithubApp.swift
//  Github
//
//  Created by jmlb23 on 23/5/22.
//

import Shared
import SwiftUI

@main
struct GithubApp: App {
  init() {
    CommonComponent.companion.doInitKoin()
  }

  var body: some Scene {
    WindowGroup {
      ContentView().environmentObject(EnvDependencies(CommonComponent()))
    }
  }
}
