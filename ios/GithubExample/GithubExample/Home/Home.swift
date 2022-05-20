//
//  Home.swift
//  GithubExample
//
//  Created by jmlb23 on 19/5/22.
//

import Kingfisher
import State
import SwiftUI

struct Home: View {
  @State var favorites: [DomainRepository] = []
  @State var textSearch: String = ""
  var body: some View {
    NavigationView {
      ZStack {
        Color(UIColor.lightGray).ignoresSafeArea()
        Form {
          Section {
            SearchView(hint: "Search ...", text: $textSearch)
          }.listRowInsets(EdgeInsets(top: 0, leading: 0, bottom: 0, trailing: 0)).listRowBackground(Color(red: 0, green: 0, blue: 0, opacity: 0))

          Section(header: Text("My Work").font(.title2).fontWeight(.bold).foregroundColor(.black)) {
            HomeItem(backgroundColor: Color.green, text: "Issues") {
              Image(systemName: "circle.circle")
            }
            HomeItem(backgroundColor: Color.blue, text: "Pull Request") {
              Image(systemName: "arrow.triangle.pull")
            }
            HomeItem(backgroundColor: Color.purple, text: "Discusion") {
              Image(systemName: "bubble.left.and.bubble.right")
            }
            HomeItem(backgroundColor: Color.gray, text: "Repositories") {
              Image(systemName: "text.book.closed")
            }
            HomeItem(backgroundColor: Color.orange, text: "Repositories") {
              Image(systemName: "building.2")
            }
          }.frame(maxWidth: .infinity, alignment: .leading)

          Section(header: Text("Favorites").font(.title2).fontWeight(.bold).foregroundColor(.black)) {
            ForEach(0 ..< favorites.count) { index in
              HomeItem(backgroundColor: Color.white, text: favorites[index].name ?? "") {
                KFImage(URL(string: favorites[index].owner.avatarURL ?? "")!)
              }
            }
          }.frame(maxWidth: .infinity, alignment: .leading)
        }
        .navigationTitle("Home")
        .toolbar {
          ToolbarItem(placement: .navigationBarTrailing) {
            Button(action: {}, label: {
              Image(systemName: "plus.circle")
            })
          }
        }
      }
    }
  }
}

struct Home_Previews: PreviewProvider {
  static var previews: some View {
    Home()
  }
}
