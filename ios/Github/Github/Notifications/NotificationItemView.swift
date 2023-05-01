//
//  NotificationItemView.swift
//  Github
//
//  Created by jmlb23 on 27/5/22.
//

import Shared
import SwiftUI

struct NotificationItemView: View {
  var noti: Shared.Notification? = nil
  var body: some View {
    VStack {
      HStack {
        Text(noti?.repository.owner.login ?? "")
        Text("/")
        Text(noti?.repository.name ?? "")
        Spacer()
        Text(noti?.updatedAt ?? "")
      }
      HStack {
        if noti?.unread ?? true {
          Circle().frame(width: 24, height: 24, alignment: .top).overlay(Color.blue.clipShape(Circle()))
          Spacer()
        }
        Text(noti?.subject.title ?? "").frame(maxWidth: .infinity, alignment: .leading)
        Spacer()
        Text("4").padding(5).background(Color.blue.clipShape(RoundedRectangle(cornerRadius: 5.0)))
      }
    }.frame(maxWidth: .infinity).background(Color(red: 222, green: 222, blue: 222).clipShape(RoundedRectangle(cornerRadius: 5.0)))
  }
}

struct NotificationItemView_Previews: PreviewProvider {
  static var previews: some View {
    NotificationItemView(noti: nil)
  }
}
