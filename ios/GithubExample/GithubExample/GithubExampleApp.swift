//
//  GithubExampleApp.swift
//  GithubExample
//
//  Created by jmlb23 on 5/5/22.
//

import SwiftUI
import State

@main
struct GithubExampleApp: App {
  init(){
    IosComponentKt.doInitKoin()
  }
    var body: some Scene {
        WindowGroup {
          ContentView().environmentObject(EnvWrapper(IosComponent()))
        }
    }
}


class EnvWrapper : ObservableObject {
  public let component: IosComponent
  
  init(_ component: IosComponent){
    self.component = component
  }
}
