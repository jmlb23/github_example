//
//  NotificationsView.swift
//  Github
//
//  Created by jmlb23 on 24/5/22.
//

import Combine
import Shared
import SwiftUI

struct NotificationsView: View {
  @State var notifications: [Shared.Notification] = []
  @EnvironmentObject var env: EnvDependencies
  @State var subscription: Shared.Subscription? = nil
  var redux: Store {
    env.redux
  }

  var body: some View {
    NavigationView {
      List {
        ForEach(notifications) { noti in
          NotificationItemView(noti: noti)
        }
        LoadMoreView(condition: Binding.constant($notifications.isEmpty)) {
          redux.dispatch.invoke(p1: NotificationsActions.GetNotifications.shared, completionHandler: { _, _ in
          })
        }
      }.frame(maxWidth: .infinity).listStyle(PlainListStyle())
    }.onAppear {
      self.subscription = redux.subscribe(subscriber: { state in
        self.notifications = (state as? AppState)?.notifications.notification ?? []
      })
      if (redux.state() as? AppState)?.notifications.notification.isEmpty ?? false {
        redux.dispatch.invoke(p1: NotificationsActions.GetNotifications.shared, completionHandler: { _, _ in
        })
      } else {
        notifications = (redux.state() as? AppState)?.notifications.notification ?? []
      }
    }.onDisappear {
      if let subscription = subscription {
        redux.unsubscribe(subscription: subscription)
      }
    }
  }
}

struct NotificationsView_Previews: PreviewProvider {
  static var previews: some View {
    NotificationsView().environmentObject(EnvDependencies(CommonComponent()))
  }
}

extension Shared.Notification: Identifiable {
  public var id: String {
    url ?? ""
  }
}
