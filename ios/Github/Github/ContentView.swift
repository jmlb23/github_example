//
//  ContentView.swift
//  Github
//
//  Created by jmlb23 on 23/5/22.
//

import Shared
import SwiftUI

struct ContentView: View {
  @EnvironmentObject var env: EnvDependencies
  @State var token: String = ""

  var body: some View {
    Group {
      if token.isEmpty {
        LoginView()
      } else {
        TabView {
          HomeView().tabItem {
            Label("Home", systemImage: "house.fill")
          }
          NotificationsView().tabItem {
            Label("Notifications", systemImage: "bell.fill")
          }
          HomeView().tabItem {
            Label("Explore", systemImage: "magnifyingglass")
          }
          HomeView().tabItem {
            Label("Profile", systemImage: "person.fill")
          }
        }
      }
    }.onAppear {
      self.token = env.pref.getString(key: "token", defaultValue: "")
      print("token ------> ", token)
    }.onOpenURL { url in
      let query = URLComponents(url: url, resolvingAgainstBaseURL: false)?.queryItems
      print("Query ------> ", query)

      if let state = query?.first(where: { item in item.name == "state" })?.value,
         let code = query?.first(where: { item in item.name == "code" })?.value
      {
        env.oauth.requestToken(code: code, state: state) { succ, _ in
          if let token = succ {
            print("Success -----> ", token)
            self.token = token
            env.pref.putString(key: "token", value: token)
          }
        }
      }
    }
  }
}

struct ContentView_Previews: PreviewProvider {
  static var previews: some View {
    ContentView()
  }
}
