//
//  HomeItemView.swift
//  Github
//
//  Created by jmlb23 on 23/5/22.
//

import SwiftUI

struct HomeItemView<V: View>: View {
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

struct HomeItemView_Previews: PreviewProvider {
  static var previews: some View {
    HomeItemView(backgroundColor: Color.red, text: "example"){
      Image(systemName:"circle.circle")
    }
  }
}
