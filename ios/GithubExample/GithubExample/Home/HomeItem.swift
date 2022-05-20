//
//  HomeItem.swift
//  GithubExample
//
//  Created by jmlb23 on 19/5/22.
//

import SwiftUI

struct HomeItem<V: View>: View {
  let backgroundColor: Color
  let text: String
  let icon: () -> V
  var body: some View {
    HStack {
      icon()
        .frame(width: 24, height: 24)
        .padding(5)
        .background(backgroundColor.clipShape(RoundedRectangle(cornerRadius: 5)))
      Text(text)
      Spacer()
      Image(systemName: "chevron.right")
    }
  }
}

struct HomeItem_Previews: PreviewProvider {
  static var previews: some View {
    HomeItem(backgroundColor: Color.red, text: "example"){
      Image(systemName:"circle.circle")
    }
  }
}
