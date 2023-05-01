//
//  LoadMoreView.swift
//  Github
//
//  Created by jmlb23 on 27/5/22.
//

import SwiftUI

struct LoadMoreView: View {
  @Binding var condition: Bool
  var onLoad : () -> Void
    var body: some View {
      Group {
        if condition {
          HStack {
            Spacer()
            ProgressView().progressViewStyle(CircularProgressViewStyle())
            Spacer()
          }.frame(maxWidth: .infinity)
        } else {
          HStack {
            Spacer()
            ProgressView().progressViewStyle(CircularProgressViewStyle()).onAppear {
              onLoad()
            }
            Spacer()
          }.frame(maxWidth: .infinity)
        }
      }.frame(maxWidth: .infinity).listRowSeparator(.hidden).background(Color.white.clipShape(RoundedRectangle(cornerRadius: 5.0)))
    }
}

struct LoadMoreView_Previews: PreviewProvider {
    static var previews: some View {
      LoadMoreView(condition: Binding.constant(true)){
        
      }
    }
}
