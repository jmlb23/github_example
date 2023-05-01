// This file automatically generated by MOKO KSwift (https://github.com/icerockdev/moko-kswift)
//
import Shared

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/Actions */
public enum ActionsKs {

  case com/github/jmlb23/gitexample/state/NotificationsActions(NotificationsActions)
  case com/github/jmlb23/gitexample/state/ProfileActions(ProfileActions)
  case com/github/jmlb23/gitexample/state/RepositoriesActions(RepositoriesActions)
  case com/github/jmlb23/gitexample/state/StarredRepositoriesActions(StarredRepositoriesActions)
  case com/github/jmlb23/gitexample/state/FavoritesActions(FavoritesActions)

  var sealed: Actions {
    switch self {
    case .com/github/jmlb23/gitexample/state/NotificationsActions(let obj):
      return obj as! Shared.Actions
    case .com/github/jmlb23/gitexample/state/ProfileActions(let obj):
      return obj as! Shared.Actions
    case .com/github/jmlb23/gitexample/state/RepositoriesActions(let obj):
      return obj as! Shared.Actions
    case .com/github/jmlb23/gitexample/state/StarredRepositoriesActions(let obj):
      return obj as! Shared.Actions
    case .com/github/jmlb23/gitexample/state/FavoritesActions(let obj):
      return obj as! Shared.Actions
    }
  }

  public init(_ obj: Actions) {
    if let obj = obj as? Shared.NotificationsActions {
      self = .com/github/jmlb23/gitexample/state/NotificationsActions(obj)
    } else if let obj = obj as? Shared.ProfileActions {
      self = .com/github/jmlb23/gitexample/state/ProfileActions(obj)
    } else if let obj = obj as? Shared.RepositoriesActions {
      self = .com/github/jmlb23/gitexample/state/RepositoriesActions(obj)
    } else if let obj = obj as? Shared.StarredRepositoriesActions {
      self = .com/github/jmlb23/gitexample/state/StarredRepositoriesActions(obj)
    } else if let obj = obj as? Shared.FavoritesActions {
      self = .com/github/jmlb23/gitexample/state/FavoritesActions(obj)
    } else {
      fatalError("ActionsKs not syncronized with Actions class")
    }
  }

}

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/FavoritesActions */
public enum FavoritesActionsKs {

  case removeFavorite(FavoritesActions.RemoveFavorite)
  case setFavorite(FavoritesActions.SetFavorite)
  case getFavorites
  case setFavorites(FavoritesActions.SetFavorites)

  var sealed: FavoritesActions {
    switch self {
    case .removeFavorite(let obj):
      return obj as! Shared.FavoritesActions
    case .setFavorite(let obj):
      return obj as! Shared.FavoritesActions
    case .getFavorites:
      return Shared.FavoritesActions.GetFavorites() as! Shared.FavoritesActions
    case .setFavorites(let obj):
      return obj as! Shared.FavoritesActions
    }
  }

  public init(_ obj: FavoritesActions) {
    if let obj = obj as? Shared.FavoritesActions.RemoveFavorite {
      self = .removeFavorite(obj)
    } else if let obj = obj as? Shared.FavoritesActions.SetFavorite {
      self = .setFavorite(obj)
    } else if obj is Shared.FavoritesActions.GetFavorites {
      self = .getFavorites
    } else if let obj = obj as? Shared.FavoritesActions.SetFavorites {
      self = .setFavorites(obj)
    } else {
      fatalError("FavoritesActionsKs not syncronized with FavoritesActions class")
    }
  }

}

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/NotificationsActions */
public enum NotificationsActionsKs {

  case getNotifications
  case setNotifications(NotificationsActions.SetNotifications)

  var sealed: NotificationsActions {
    switch self {
    case .getNotifications:
      return Shared.NotificationsActions.GetNotifications() as! Shared.NotificationsActions
    case .setNotifications(let obj):
      return obj as! Shared.NotificationsActions
    }
  }

  public init(_ obj: NotificationsActions) {
    if obj is Shared.NotificationsActions.GetNotifications {
      self = .getNotifications
    } else if let obj = obj as? Shared.NotificationsActions.SetNotifications {
      self = .setNotifications(obj)
    } else {
      fatalError("NotificationsActionsKs not syncronized with NotificationsActions class")
    }
  }

}

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/ProfileActions */
public enum ProfileActionsKs {

  case getProfile
  case setProfile(ProfileActions.SetProfile)

  var sealed: ProfileActions {
    switch self {
    case .getProfile:
      return Shared.ProfileActions.GetProfile() as! Shared.ProfileActions
    case .setProfile(let obj):
      return obj as! Shared.ProfileActions
    }
  }

  public init(_ obj: ProfileActions) {
    if obj is Shared.ProfileActions.GetProfile {
      self = .getProfile
    } else if let obj = obj as? Shared.ProfileActions.SetProfile {
      self = .setProfile(obj)
    } else {
      fatalError("ProfileActionsKs not syncronized with ProfileActions class")
    }
  }

}

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/RepositoriesActions */
public enum RepositoriesActionsKs {

  case getRepositories
  case setRepositories(RepositoriesActions.SetRepositories)

  var sealed: RepositoriesActions {
    switch self {
    case .getRepositories:
      return Shared.RepositoriesActions.GetRepositories() as! Shared.RepositoriesActions
    case .setRepositories(let obj):
      return obj as! Shared.RepositoriesActions
    }
  }

  public init(_ obj: RepositoriesActions) {
    if obj is Shared.RepositoriesActions.GetRepositories {
      self = .getRepositories
    } else if let obj = obj as? Shared.RepositoriesActions.SetRepositories {
      self = .setRepositories(obj)
    } else {
      fatalError("RepositoriesActionsKs not syncronized with RepositoriesActions class")
    }
  }

}

/**
 * selector: ClassContext/GitExample:state/com/github/jmlb23/gitexample/state/StarredRepositoriesActions */
public enum StarredRepositoriesActionsKs {

  case getRepositories
  case setRepositories(StarredRepositoriesActions.SetRepositories)

  var sealed: StarredRepositoriesActions {
    switch self {
    case .getRepositories:
      return Shared.StarredRepositoriesActions.GetRepositories() as! Shared.StarredRepositoriesActions
    case .setRepositories(let obj):
      return obj as! Shared.StarredRepositoriesActions
    }
  }

  public init(_ obj: StarredRepositoriesActions) {
    if obj is Shared.StarredRepositoriesActions.GetRepositories {
      self = .getRepositories
    } else if let obj = obj as? Shared.StarredRepositoriesActions.SetRepositories {
      self = .setRepositories(obj)
    } else {
      fatalError("StarredRepositoriesActionsKs not syncronized with StarredRepositoriesActions class")
    }
  }

}
