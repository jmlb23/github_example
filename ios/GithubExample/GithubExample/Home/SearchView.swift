//
//  SearchView.swift
//  GithubExample
//
//  Created by jmlb23 on 20/5/22.
//

import SwiftUI

struct SearchView: View {
  var hint: String
  @Binding var text: String
  var body: some View {
    HStack {
      Image(systemName: "magnifyingglass")
      TextField(hint, text: $text)
    }.padding(6)
      .overlay(
        RoundedRectangle(cornerRadius: 7)
          .stroke(.gray, lineWidth: 1)
      ).background(Color.white)
  }
}

struct SearchView_Previews: PreviewProvider {
  static var previews: some View {
    SearchView(hint: "example", text: Binding.constant(""))
  }
}
