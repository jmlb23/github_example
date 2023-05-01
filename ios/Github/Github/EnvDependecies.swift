//
//  EnvDependecies.swift
//  Github
//
//  Created by jmlb23 on 23/5/22.
//

import Shared
import SwiftUI

typealias Settings = Multiplatform_settingsSettings

class EnvDependencies: ObservableObject {
  private let component: CommonComponent
  public var redux: Store {
    component.redux
  }

  public var oauth: DataOauth {
    component.oauth
  }

  public var pref: Settings {
    component.preferences
  }

  init(_ component: CommonComponent) {
    self.component = component
  }
}
