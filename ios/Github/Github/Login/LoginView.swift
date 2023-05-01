//
//  LoginView.swift
//  Github
//
//  Created by jmlb23 on 23/5/22.
//

import Shared
import SwiftUI
struct LoginView: View {
  @EnvironmentObject var env: EnvDependencies

  var body: some View {
    VStack {
      Group {
        Spacer()
        Link(destination: URL(string: env.oauth.getUrlLaunchFlow())!) {
          Text("Login")
        }
      }
    }
  }
}

struct LoginView_Previews: PreviewProvider {
  static var previews: some View {
    LoginView().environmentObject(EnvDependencies(CommonComponent()))
  }
}
