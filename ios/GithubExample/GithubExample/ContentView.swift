//
//  ContentView.swift
//  GithubExample
//
//  Created by jmlb23 on 5/5/22.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
      TabView{
        Home().tabItem{
          Label("Home", systemImage: "house.fill")
        }
        Home().tabItem{
          Label("Notifications", systemImage: "bell.fill")
        }
        Home().tabItem{
          Label("Explore", systemImage: "magnifyingglass")
        }
        Home().tabItem{
          Label("Profile", systemImage: "person.fill")
        }
      }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
