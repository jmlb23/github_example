#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedNotificationsState, SharedUserProfile, SharedRepos, SharedFavorites, SharedStarred, SharedAppState, SharedEnviroment, SharedRepoFavorite, SharedFavoritesActions, SharedFavoritesActionsGetFavorites, SharedFavoritesActionsRemoveFavorite, SharedFavoritesActionsSetFavorite, SharedFavoritesActionsSetFavorites, SharedNotificationsActions, SharedNotificationsActionsGetNotifications, SharedNotification, SharedNotificationsActionsSetNotifications, SharedProfileActions, SharedProfileActionsGetProfile, SharedUser, SharedProfileActionsSetProfile, SharedRepository, SharedRepositoriesActions, SharedRepositoriesActionsGetRepositories, SharedRepositoriesActionsSetRepositories, SharedStarredRepositoriesActions, SharedStarredRepositoriesActionsGetRepositories, SharedStarredRepositoriesActionsSetRepositories, SharedLicense, SharedSubject, SharedRepositoryNoti, SharedOwner, SharedOwnerNoti, SharedPermissions, SharedPinnedRepo, SharedPlan, SharedKotlinUnit, SharedSubscription, SharedKoin_coreKoin, SharedCommonComponentCompanion, SharedKoin_coreKoinApplication, SharedKoin_coreModule, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKoin_coreScope, SharedKoin_coreParametersHolder, SharedKotlinLazyThreadSafetyMode, SharedKoin_coreLogger, SharedKoin_coreInstanceRegistry, SharedKoin_corePropertyRegistry, SharedKoin_coreScopeRegistry, SharedKoin_coreKoinApplicationCompanion, SharedKoin_coreLevel, SharedKoin_coreInstanceFactory<T>, SharedKotlinPair<__covariant A, __covariant B>, SharedKoin_coreScopeDSL, SharedKoin_coreSingleInstanceFactory<T>, SharedKoin_coreLockable, SharedKoin_coreParametersHolderCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKoin_coreScopeRegistryCompanion, SharedKoin_coreBeanDefinition<T>, SharedKoin_coreInstanceFactoryCompanion, SharedKoin_coreInstanceContext, SharedKoin_coreKind, SharedKoin_coreCallbacks<T>;

@protocol SharedUseCase, SharedActions, SharedRepository, SharedKotlinSuspendFunction1, SharedKoin_coreKoinComponent, SharedDataOauth, SharedMultiplatform_settingsSettings, SharedStore, SharedKotlinFunction, SharedKoin_coreKoinScopeComponent, SharedKoin_coreQualifier, SharedKotlinKClass, SharedKotlinLazy, SharedKotlinIterator, SharedKoin_coreScopeCallback, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKotlinComparable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Actions")))
@protocol SharedActions
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppState")))
@interface SharedAppState : SharedBase
- (instancetype)initWithNotifications:(SharedNotificationsState *)notifications userProfile:(SharedUserProfile *)userProfile repos:(SharedRepos *)repos favorites:(SharedFavorites *)favorites starred:(SharedStarred *)starred __attribute__((swift_name("init(notifications:userProfile:repos:favorites:starred:)"))) __attribute__((objc_designated_initializer));
- (SharedNotificationsState *)component1 __attribute__((swift_name("component1()")));
- (SharedUserProfile *)component2 __attribute__((swift_name("component2()")));
- (SharedRepos *)component3 __attribute__((swift_name("component3()")));
- (SharedFavorites *)component4 __attribute__((swift_name("component4()")));
- (SharedStarred *)component5 __attribute__((swift_name("component5()")));
- (SharedAppState *)doCopyNotifications:(SharedNotificationsState *)notifications userProfile:(SharedUserProfile *)userProfile repos:(SharedRepos *)repos favorites:(SharedFavorites *)favorites starred:(SharedStarred *)starred __attribute__((swift_name("doCopy(notifications:userProfile:repos:favorites:starred:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedFavorites *favorites __attribute__((swift_name("favorites")));
@property (readonly) SharedNotificationsState *notifications __attribute__((swift_name("notifications")));
@property (readonly) SharedRepos *repos __attribute__((swift_name("repos")));
@property (readonly) SharedStarred *starred __attribute__((swift_name("starred")));
@property (readonly) SharedUserProfile *userProfile __attribute__((swift_name("userProfile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Enviroment")))
@interface SharedEnviroment : SharedBase
- (instancetype)initWithGetNotificationsUseCase:(id<SharedUseCase>)getNotificationsUseCase getCurrentUserUseCase:(id<SharedUseCase>)getCurrentUserUseCase getRepositoriesPaginatedUseCase:(id<SharedUseCase>)getRepositoriesPaginatedUseCase getRepositoriesStarredPaginatedUseCase:(id<SharedUseCase>)getRepositoriesStarredPaginatedUseCase getRepositoriesFavoriteUseCase:(id<SharedUseCase>)getRepositoriesFavoriteUseCase removeRepositoriesFavoriteUseCase:(id<SharedUseCase>)removeRepositoriesFavoriteUseCase addRepositoriesFavoriteUseCase:(id<SharedUseCase>)addRepositoriesFavoriteUseCase __attribute__((swift_name("init(getNotificationsUseCase:getCurrentUserUseCase:getRepositoriesPaginatedUseCase:getRepositoriesStarredPaginatedUseCase:getRepositoriesFavoriteUseCase:removeRepositoriesFavoriteUseCase:addRepositoriesFavoriteUseCase:)"))) __attribute__((objc_designated_initializer));
- (id<SharedUseCase>)component1 __attribute__((swift_name("component1()")));
- (id<SharedUseCase>)component2 __attribute__((swift_name("component2()")));
- (id<SharedUseCase>)component3 __attribute__((swift_name("component3()")));
- (id<SharedUseCase>)component4 __attribute__((swift_name("component4()")));
- (id<SharedUseCase>)component5 __attribute__((swift_name("component5()")));
- (id<SharedUseCase>)component6 __attribute__((swift_name("component6()")));
- (id<SharedUseCase>)component7 __attribute__((swift_name("component7()")));
- (SharedEnviroment *)doCopyGetNotificationsUseCase:(id<SharedUseCase>)getNotificationsUseCase getCurrentUserUseCase:(id<SharedUseCase>)getCurrentUserUseCase getRepositoriesPaginatedUseCase:(id<SharedUseCase>)getRepositoriesPaginatedUseCase getRepositoriesStarredPaginatedUseCase:(id<SharedUseCase>)getRepositoriesStarredPaginatedUseCase getRepositoriesFavoriteUseCase:(id<SharedUseCase>)getRepositoriesFavoriteUseCase removeRepositoriesFavoriteUseCase:(id<SharedUseCase>)removeRepositoriesFavoriteUseCase addRepositoriesFavoriteUseCase:(id<SharedUseCase>)addRepositoriesFavoriteUseCase __attribute__((swift_name("doCopy(getNotificationsUseCase:getCurrentUserUseCase:getRepositoriesPaginatedUseCase:getRepositoriesStarredPaginatedUseCase:getRepositoriesFavoriteUseCase:removeRepositoriesFavoriteUseCase:addRepositoriesFavoriteUseCase:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedUseCase> addRepositoriesFavoriteUseCase __attribute__((swift_name("addRepositoriesFavoriteUseCase")));
@property (readonly) id<SharedUseCase> getCurrentUserUseCase __attribute__((swift_name("getCurrentUserUseCase")));
@property (readonly) id<SharedUseCase> getNotificationsUseCase __attribute__((swift_name("getNotificationsUseCase")));
@property (readonly) id<SharedUseCase> getRepositoriesFavoriteUseCase __attribute__((swift_name("getRepositoriesFavoriteUseCase")));
@property (readonly) id<SharedUseCase> getRepositoriesPaginatedUseCase __attribute__((swift_name("getRepositoriesPaginatedUseCase")));
@property (readonly) id<SharedUseCase> getRepositoriesStarredPaginatedUseCase __attribute__((swift_name("getRepositoriesStarredPaginatedUseCase")));
@property (readonly) id<SharedUseCase> removeRepositoriesFavoriteUseCase __attribute__((swift_name("removeRepositoriesFavoriteUseCase")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Favorites")))
@interface SharedFavorites : SharedBase
- (instancetype)initWithFavorites:(NSArray<SharedRepoFavorite *> *)favorites __attribute__((swift_name("init(favorites:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRepoFavorite *> *)component1 __attribute__((swift_name("component1()")));
- (SharedFavorites *)doCopyFavorites:(NSArray<SharedRepoFavorite *> *)favorites __attribute__((swift_name("doCopy(favorites:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRepoFavorite *> *favorites __attribute__((swift_name("favorites")));
@end;

__attribute__((swift_name("FavoritesActions")))
@interface SharedFavoritesActions : SharedBase <SharedActions>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesActions.GetFavorites")))
@interface SharedFavoritesActionsGetFavorites : SharedFavoritesActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getFavorites __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFavoritesActionsGetFavorites *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesActions.RemoveFavorite")))
@interface SharedFavoritesActionsRemoveFavorite : SharedFavoritesActions
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFavoritesActionsRemoveFavorite *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesActions.SetFavorite")))
@interface SharedFavoritesActionsSetFavorite : SharedFavoritesActions
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFavoritesActionsSetFavorite *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritesActions.SetFavorites")))
@interface SharedFavoritesActionsSetFavorites : SharedFavoritesActions
- (instancetype)initWithRepos:(NSArray<SharedRepoFavorite *> *)repos __attribute__((swift_name("init(repos:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRepoFavorite *> *)component1 __attribute__((swift_name("component1()")));
- (SharedFavoritesActionsSetFavorites *)doCopyRepos:(NSArray<SharedRepoFavorite *> *)repos __attribute__((swift_name("doCopy(repos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRepoFavorite *> *repos __attribute__((swift_name("repos")));
@end;

__attribute__((swift_name("NotificationsActions")))
@interface SharedNotificationsActions : SharedBase <SharedActions>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationsActions.GetNotifications")))
@interface SharedNotificationsActionsGetNotifications : SharedNotificationsActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getNotifications __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNotificationsActionsGetNotifications *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationsActions.SetNotifications")))
@interface SharedNotificationsActionsSetNotifications : SharedNotificationsActions
- (instancetype)initWithNotifications:(NSArray<SharedNotification *> *)notifications __attribute__((swift_name("init(notifications:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedNotification *> *)component1 __attribute__((swift_name("component1()")));
- (SharedNotificationsActionsSetNotifications *)doCopyNotifications:(NSArray<SharedNotification *> *)notifications __attribute__((swift_name("doCopy(notifications:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedNotification *> *notifications __attribute__((swift_name("notifications")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationsState")))
@interface SharedNotificationsState : SharedBase
- (instancetype)initWithCurrentPage:(int32_t)currentPage notification:(NSArray<SharedNotification *> *)notification __attribute__((swift_name("init(currentPage:notification:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedNotification *> *)component2 __attribute__((swift_name("component2()")));
- (SharedNotificationsState *)doCopyCurrentPage:(int32_t)currentPage notification:(NSArray<SharedNotification *> *)notification __attribute__((swift_name("doCopy(currentPage:notification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) NSArray<SharedNotification *> *notification __attribute__((swift_name("notification")));
@end;

__attribute__((swift_name("ProfileActions")))
@interface SharedProfileActions : SharedBase <SharedActions>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileActions.GetProfile")))
@interface SharedProfileActionsGetProfile : SharedProfileActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getProfile __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedProfileActionsGetProfile *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileActions.SetProfile")))
@interface SharedProfileActionsSetProfile : SharedProfileActions
- (instancetype)initWithUser:(SharedUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (SharedUser *)component1 __attribute__((swift_name("component1()")));
- (SharedProfileActionsSetProfile *)doCopyUser:(SharedUser *)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Repos")))
@interface SharedRepos : SharedBase
- (instancetype)initWithPage:(int32_t)page repos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("init(page:repos:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedRepository *> *)component2 __attribute__((swift_name("component2()")));
- (SharedRepos *)doCopyPage:(int32_t)page repos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("doCopy(page:repos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) NSArray<SharedRepository *> *repos __attribute__((swift_name("repos")));
@end;

__attribute__((swift_name("RepositoriesActions")))
@interface SharedRepositoriesActions : SharedBase <SharedActions>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoriesActions.GetRepositories")))
@interface SharedRepositoriesActionsGetRepositories : SharedRepositoriesActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getRepositories __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRepositoriesActionsGetRepositories *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoriesActions.SetRepositories")))
@interface SharedRepositoriesActionsSetRepositories : SharedRepositoriesActions
- (instancetype)initWithRepos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("init(repos:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRepository *> *)component1 __attribute__((swift_name("component1()")));
- (SharedRepositoriesActionsSetRepositories *)doCopyRepos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("doCopy(repos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRepository *> *repos __attribute__((swift_name("repos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Starred")))
@interface SharedStarred : SharedBase
- (instancetype)initWithPage:(int32_t)page starred:(NSArray<SharedRepository *> *)starred __attribute__((swift_name("init(page:starred:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedRepository *> *)component2 __attribute__((swift_name("component2()")));
- (SharedStarred *)doCopyPage:(int32_t)page starred:(NSArray<SharedRepository *> *)starred __attribute__((swift_name("doCopy(page:starred:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) NSArray<SharedRepository *> *starred __attribute__((swift_name("starred")));
@end;

__attribute__((swift_name("StarredRepositoriesActions")))
@interface SharedStarredRepositoriesActions : SharedBase <SharedActions>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StarredRepositoriesActions.GetRepositories")))
@interface SharedStarredRepositoriesActionsGetRepositories : SharedStarredRepositoriesActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getRepositories __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStarredRepositoriesActionsGetRepositories *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StarredRepositoriesActions.SetRepositories")))
@interface SharedStarredRepositoriesActionsSetRepositories : SharedStarredRepositoriesActions
- (instancetype)initWithRepos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("init(repos:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRepository *> *)component1 __attribute__((swift_name("component1()")));
- (SharedStarredRepositoriesActionsSetRepositories *)doCopyRepos:(NSArray<SharedRepository *> *)repos __attribute__((swift_name("doCopy(repos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRepository *> *repos __attribute__((swift_name("repos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfile")))
@interface SharedUserProfile : SharedBase
- (instancetype)initWithUser:(SharedUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (SharedUser * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserProfile *)doCopyUser:(SharedUser * _Nullable)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Repository_")))
@protocol SharedRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addE:(id _Nullable)e completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("add(e:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)filterF:(SharedBoolean *(^)(id _Nullable))f completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("filter(f:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByKeyK:(id _Nullable)k completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getByKey(k:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)paginatedPage:(int32_t)page completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("paginated(page:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeK:(id _Nullable)k completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(k:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceK:(id _Nullable)k e:(id _Nullable)e completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("replace(k:e:completionHandler:)")));
@end;

__attribute__((swift_name("NotificationsRepository")))
@protocol SharedNotificationsRepository <SharedRepository>
@required
@end;

__attribute__((swift_name("RepoFavoriteRepository")))
@protocol SharedRepoFavoriteRepository <SharedRepository>
@required
@end;

__attribute__((swift_name("RepoRepository")))
@protocol SharedRepoRepository <SharedRepository>
@required
@end;

__attribute__((swift_name("StarredRepository")))
@protocol SharedStarredRepository <SharedRepository>
@required
@end;

__attribute__((swift_name("UserRepository")))
@protocol SharedUserRepository <SharedRepository>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("License")))
@interface SharedLicense : SharedBase
- (instancetype)initWithKey:(NSString * _Nullable)key name:(NSString * _Nullable)name url:(NSString * _Nullable)url spdxID:(NSString * _Nullable)spdxID nodeID:(NSString * _Nullable)nodeID htmlURL:(NSString * _Nullable)htmlURL __attribute__((swift_name("init(key:name:url:spdxID:nodeID:htmlURL:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedLicense *)doCopyKey:(NSString * _Nullable)key name:(NSString * _Nullable)name url:(NSString * _Nullable)url spdxID:(NSString * _Nullable)spdxID nodeID:(NSString * _Nullable)nodeID htmlURL:(NSString * _Nullable)htmlURL __attribute__((swift_name("doCopy(key:name:url:spdxID:nodeID:htmlURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable spdxID __attribute__((swift_name("spdxID")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Notification")))
@interface SharedNotification : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id unread:(BOOL)unread reason:(NSString * _Nullable)reason updatedAt:(NSString * _Nullable)updatedAt lastReadAt:(NSString * _Nullable)lastReadAt subject:(SharedSubject *)subject repository:(SharedRepositoryNoti *)repository url:(NSString * _Nullable)url subscriptionURL:(NSString * _Nullable)subscriptionURL __attribute__((swift_name("init(id:unread:reason:updatedAt:lastReadAt:subject:repository:url:subscriptionURL:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedSubject *)component6 __attribute__((swift_name("component6()")));
- (SharedRepositoryNoti *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedNotification *)doCopyId:(NSString * _Nullable)id unread:(BOOL)unread reason:(NSString * _Nullable)reason updatedAt:(NSString * _Nullable)updatedAt lastReadAt:(NSString * _Nullable)lastReadAt subject:(SharedSubject *)subject repository:(SharedRepositoryNoti *)repository url:(NSString * _Nullable)url subscriptionURL:(NSString * _Nullable)subscriptionURL __attribute__((swift_name("doCopy(id:unread:reason:updatedAt:lastReadAt:subject:repository:url:subscriptionURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastReadAt __attribute__((swift_name("lastReadAt")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@property (readonly) SharedRepositoryNoti *repository __attribute__((swift_name("repository")));
@property (readonly) SharedSubject *subject __attribute__((swift_name("subject")));
@property (readonly) NSString * _Nullable subscriptionURL __attribute__((swift_name("subscriptionURL")));
@property (readonly) BOOL unread __attribute__((swift_name("unread")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Owner")))
@interface SharedOwner : SharedBase
- (instancetype)initWithLogin:(NSString * _Nullable)login id:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(SharedBoolean * _Nullable)siteAdmin __attribute__((swift_name("init(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SharedLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedOwner *)doCopyLogin:(NSString * _Nullable)login id:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(SharedBoolean * _Nullable)siteAdmin __attribute__((swift_name("doCopy(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarURL __attribute__((swift_name("avatarURL")));
@property (readonly) NSString * _Nullable eventsURL __attribute__((swift_name("eventsURL")));
@property (readonly) NSString * _Nullable followersURL __attribute__((swift_name("followersURL")));
@property (readonly) NSString * _Nullable followingURL __attribute__((swift_name("followingURL")));
@property (readonly) NSString * _Nullable gistsURL __attribute__((swift_name("gistsURL")));
@property (readonly) NSString * _Nullable gravatarID __attribute__((swift_name("gravatarID")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) SharedLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable login __attribute__((swift_name("login")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable organizationsURL __attribute__((swift_name("organizationsURL")));
@property (readonly) NSString * _Nullable receivedEventsURL __attribute__((swift_name("receivedEventsURL")));
@property (readonly) NSString * _Nullable reposURL __attribute__((swift_name("reposURL")));
@property (readonly) SharedBoolean * _Nullable siteAdmin __attribute__((swift_name("siteAdmin")));
@property (readonly) NSString * _Nullable starredURL __attribute__((swift_name("starredURL")));
@property (readonly) NSString * _Nullable subscriptionsURL __attribute__((swift_name("subscriptionsURL")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OwnerNoti")))
@interface SharedOwnerNoti : SharedBase
- (instancetype)initWithLogin:(NSString * _Nullable)login id:(int64_t)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(BOOL)siteAdmin __attribute__((swift_name("init(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedOwnerNoti *)doCopyLogin:(NSString * _Nullable)login id:(int64_t)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(BOOL)siteAdmin __attribute__((swift_name("doCopy(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarURL __attribute__((swift_name("avatarURL")));
@property (readonly) NSString * _Nullable eventsURL __attribute__((swift_name("eventsURL")));
@property (readonly) NSString * _Nullable followersURL __attribute__((swift_name("followersURL")));
@property (readonly) NSString * _Nullable followingURL __attribute__((swift_name("followingURL")));
@property (readonly) NSString * _Nullable gistsURL __attribute__((swift_name("gistsURL")));
@property (readonly) NSString * _Nullable gravatarID __attribute__((swift_name("gravatarID")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable login __attribute__((swift_name("login")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable organizationsURL __attribute__((swift_name("organizationsURL")));
@property (readonly) NSString * _Nullable receivedEventsURL __attribute__((swift_name("receivedEventsURL")));
@property (readonly) NSString * _Nullable reposURL __attribute__((swift_name("reposURL")));
@property (readonly) BOOL siteAdmin __attribute__((swift_name("siteAdmin")));
@property (readonly) NSString * _Nullable starredURL __attribute__((swift_name("starredURL")));
@property (readonly) NSString * _Nullable subscriptionsURL __attribute__((swift_name("subscriptionsURL")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions")))
@interface SharedPermissions : SharedBase
- (instancetype)initWithAdmin:(SharedBoolean * _Nullable)admin push:(SharedBoolean * _Nullable)push pull:(SharedBoolean * _Nullable)pull __attribute__((swift_name("init(admin:push:pull:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedPermissions *)doCopyAdmin:(SharedBoolean * _Nullable)admin push:(SharedBoolean * _Nullable)push pull:(SharedBoolean * _Nullable)pull __attribute__((swift_name("doCopy(admin:push:pull:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable admin __attribute__((swift_name("admin")));
@property (readonly) SharedBoolean * _Nullable pull __attribute__((swift_name("pull")));
@property (readonly) SharedBoolean * _Nullable push __attribute__((swift_name("push")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PinnedRepo")))
@interface SharedPinnedRepo : SharedBase
- (instancetype)initWithName:(NSString * _Nullable)name description:(NSString * _Nullable)description starts:(NSString * _Nullable)starts lang:(NSString * _Nullable)lang langColor:(NSString * _Nullable)langColor __attribute__((swift_name("init(name:description:starts:lang:langColor:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedPinnedRepo *)doCopyName:(NSString * _Nullable)name description:(NSString * _Nullable)description starts:(NSString * _Nullable)starts lang:(NSString * _Nullable)lang langColor:(NSString * _Nullable)langColor __attribute__((swift_name("doCopy(name:description:starts:lang:langColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable lang __attribute__((swift_name("lang")));
@property (readonly) NSString * _Nullable langColor __attribute__((swift_name("langColor")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable starts __attribute__((swift_name("starts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plan")))
@interface SharedPlan : SharedBase
- (instancetype)initWithName:(NSString * _Nullable)name space:(SharedLong * _Nullable)space privateRepos:(SharedLong * _Nullable)privateRepos collaborators:(SharedLong * _Nullable)collaborators __attribute__((swift_name("init(name:space:privateRepos:collaborators:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedPlan *)doCopyName:(NSString * _Nullable)name space:(SharedLong * _Nullable)space privateRepos:(SharedLong * _Nullable)privateRepos collaborators:(SharedLong * _Nullable)collaborators __attribute__((swift_name("doCopy(name:space:privateRepos:collaborators:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLong * _Nullable collaborators __attribute__((swift_name("collaborators")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedLong * _Nullable privateRepos __attribute__((swift_name("privateRepos")));
@property (readonly) SharedLong * _Nullable space __attribute__((swift_name("space")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepoFavorite")))
@interface SharedRepoFavorite : SharedBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRepoFavorite *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Repository")))
@interface SharedRepository : SharedBase
- (instancetype)initWithId:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID name:(NSString * _Nullable)name fullName:(NSString * _Nullable)fullName owner:(SharedOwner *)owner private:(SharedBoolean * _Nullable)private_ htmlURL:(NSString * _Nullable)htmlURL description:(NSString * _Nullable)description fork:(SharedBoolean * _Nullable)fork url:(NSString * _Nullable)url archiveURL:(NSString * _Nullable)archiveURL assigneesURL:(NSString * _Nullable)assigneesURL blobsURL:(NSString * _Nullable)blobsURL branchesURL:(NSString * _Nullable)branchesURL collaboratorsURL:(NSString * _Nullable)collaboratorsURL commentsURL:(NSString * _Nullable)commentsURL commitsURL:(NSString * _Nullable)commitsURL compareURL:(NSString * _Nullable)compareURL contentsURL:(NSString * _Nullable)contentsURL contributorsURL:(NSString * _Nullable)contributorsURL deploymentsURL:(NSString * _Nullable)deploymentsURL downloadsURL:(NSString * _Nullable)downloadsURL eventsURL:(NSString * _Nullable)eventsURL forksURL:(NSString * _Nullable)forksURL gitCommitsURL:(NSString * _Nullable)gitCommitsURL gitRefsURL:(NSString * _Nullable)gitRefsURL gitTagsURL:(NSString * _Nullable)gitTagsURL gitURL:(NSString * _Nullable)gitURL issueCommentURL:(NSString * _Nullable)issueCommentURL issueEventsURL:(NSString * _Nullable)issueEventsURL issuesURL:(NSString * _Nullable)issuesURL keysURL:(NSString * _Nullable)keysURL labelsURL:(NSString * _Nullable)labelsURL languagesURL:(NSString * _Nullable)languagesURL mergesURL:(NSString * _Nullable)mergesURL milestonesURL:(NSString * _Nullable)milestonesURL notificationsURL:(NSString * _Nullable)notificationsURL pullsURL:(NSString * _Nullable)pullsURL releasesURL:(NSString * _Nullable)releasesURL sshURL:(NSString * _Nullable)sshURL stargazersURL:(NSString * _Nullable)stargazersURL statusesURL:(NSString * _Nullable)statusesURL subscribersURL:(NSString * _Nullable)subscribersURL subscriptionURL:(NSString * _Nullable)subscriptionURL tagsURL:(NSString * _Nullable)tagsURL teamsURL:(NSString * _Nullable)teamsURL treesURL:(NSString * _Nullable)treesURL cloneURL:(NSString * _Nullable)cloneURL mirrorURL:(NSString * _Nullable)mirrorURL hooksURL:(NSString * _Nullable)hooksURL svnURL:(NSString * _Nullable)svnURL homepage:(NSString * _Nullable)homepage language:(NSString * _Nullable)language forksCount:(SharedLong * _Nullable)forksCount stargazersCount:(SharedLong * _Nullable)stargazersCount watchersCount:(SharedLong * _Nullable)watchersCount size:(SharedLong * _Nullable)size defaultBranch:(NSString * _Nullable)defaultBranch openIssuesCount:(SharedLong * _Nullable)openIssuesCount isTemplate:(SharedBoolean * _Nullable)isTemplate topics:(NSArray<id> *)topics hasIssues:(SharedBoolean * _Nullable)hasIssues hasProjects:(SharedBoolean * _Nullable)hasProjects hasWiki:(SharedBoolean * _Nullable)hasWiki hasPages:(SharedBoolean * _Nullable)hasPages hasDownloads:(SharedBoolean * _Nullable)hasDownloads archived:(SharedBoolean * _Nullable)archived disabled:(SharedBoolean * _Nullable)disabled visibility:(NSString * _Nullable)visibility pushedAt:(NSString * _Nullable)pushedAt createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt permissions:(SharedPermissions *)permissions allowRebaseMerge:(SharedBoolean * _Nullable)allowRebaseMerge templateRepository:(NSString * _Nullable)templateRepository tempCloneToken:(NSString * _Nullable)tempCloneToken allowSquashMerge:(SharedBoolean * _Nullable)allowSquashMerge allowAutoMerge:(SharedBoolean * _Nullable)allowAutoMerge deleteBranchOnMerge:(SharedBoolean * _Nullable)deleteBranchOnMerge allowMergeCommit:(SharedBoolean * _Nullable)allowMergeCommit subscribersCount:(SharedLong * _Nullable)subscribersCount networkCount:(SharedLong * _Nullable)networkCount license:(SharedLicense * _Nullable)license forks:(SharedLong * _Nullable)forks openIssues:(SharedLong * _Nullable)openIssues watchers:(SharedLong * _Nullable)watchers __attribute__((swift_name("init(id:nodeID:name:fullName:owner:private:htmlURL:description:fork:url:archiveURL:assigneesURL:blobsURL:branchesURL:collaboratorsURL:commentsURL:commitsURL:compareURL:contentsURL:contributorsURL:deploymentsURL:downloadsURL:eventsURL:forksURL:gitCommitsURL:gitRefsURL:gitTagsURL:gitURL:issueCommentURL:issueEventsURL:issuesURL:keysURL:labelsURL:languagesURL:mergesURL:milestonesURL:notificationsURL:pullsURL:releasesURL:sshURL:stargazersURL:statusesURL:subscribersURL:subscriptionURL:tagsURL:teamsURL:treesURL:cloneURL:mirrorURL:hooksURL:svnURL:homepage:language:forksCount:stargazersCount:watchersCount:size:defaultBranch:openIssuesCount:isTemplate:topics:hasIssues:hasProjects:hasWiki:hasPages:hasDownloads:archived:disabled:visibility:pushedAt:createdAt:updatedAt:permissions:allowRebaseMerge:templateRepository:tempCloneToken:allowSquashMerge:allowAutoMerge:deleteBranchOnMerge:allowMergeCommit:subscribersCount:networkCount:license:forks:openIssues:watchers:)"))) __attribute__((objc_designated_initializer));
- (SharedLong * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSString * _Nullable)component34 __attribute__((swift_name("component34()")));
- (NSString * _Nullable)component35 __attribute__((swift_name("component35()")));
- (NSString * _Nullable)component36 __attribute__((swift_name("component36()")));
- (NSString * _Nullable)component37 __attribute__((swift_name("component37()")));
- (NSString * _Nullable)component38 __attribute__((swift_name("component38()")));
- (NSString * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component40 __attribute__((swift_name("component40()")));
- (NSString * _Nullable)component41 __attribute__((swift_name("component41()")));
- (NSString * _Nullable)component42 __attribute__((swift_name("component42()")));
- (NSString * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component44 __attribute__((swift_name("component44()")));
- (NSString * _Nullable)component45 __attribute__((swift_name("component45()")));
- (NSString * _Nullable)component46 __attribute__((swift_name("component46()")));
- (NSString * _Nullable)component47 __attribute__((swift_name("component47()")));
- (NSString * _Nullable)component48 __attribute__((swift_name("component48()")));
- (NSString * _Nullable)component49 __attribute__((swift_name("component49()")));
- (SharedOwner *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component50 __attribute__((swift_name("component50()")));
- (NSString * _Nullable)component51 __attribute__((swift_name("component51()")));
- (NSString * _Nullable)component52 __attribute__((swift_name("component52()")));
- (NSString * _Nullable)component53 __attribute__((swift_name("component53()")));
- (SharedLong * _Nullable)component54 __attribute__((swift_name("component54()")));
- (SharedLong * _Nullable)component55 __attribute__((swift_name("component55()")));
- (SharedLong * _Nullable)component56 __attribute__((swift_name("component56()")));
- (SharedLong * _Nullable)component57 __attribute__((swift_name("component57()")));
- (NSString * _Nullable)component58 __attribute__((swift_name("component58()")));
- (SharedLong * _Nullable)component59 __attribute__((swift_name("component59()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component60 __attribute__((swift_name("component60()")));
- (NSArray<id> *)component61 __attribute__((swift_name("component61()")));
- (SharedBoolean * _Nullable)component62 __attribute__((swift_name("component62()")));
- (SharedBoolean * _Nullable)component63 __attribute__((swift_name("component63()")));
- (SharedBoolean * _Nullable)component64 __attribute__((swift_name("component64()")));
- (SharedBoolean * _Nullable)component65 __attribute__((swift_name("component65()")));
- (SharedBoolean * _Nullable)component66 __attribute__((swift_name("component66()")));
- (SharedBoolean * _Nullable)component67 __attribute__((swift_name("component67()")));
- (SharedBoolean * _Nullable)component68 __attribute__((swift_name("component68()")));
- (NSString * _Nullable)component69 __attribute__((swift_name("component69()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component70 __attribute__((swift_name("component70()")));
- (NSString * _Nullable)component71 __attribute__((swift_name("component71()")));
- (NSString * _Nullable)component72 __attribute__((swift_name("component72()")));
- (SharedPermissions *)component73 __attribute__((swift_name("component73()")));
- (SharedBoolean * _Nullable)component74 __attribute__((swift_name("component74()")));
- (NSString * _Nullable)component75 __attribute__((swift_name("component75()")));
- (NSString * _Nullable)component76 __attribute__((swift_name("component76()")));
- (SharedBoolean * _Nullable)component77 __attribute__((swift_name("component77()")));
- (SharedBoolean * _Nullable)component78 __attribute__((swift_name("component78()")));
- (SharedBoolean * _Nullable)component79 __attribute__((swift_name("component79()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedBoolean * _Nullable)component80 __attribute__((swift_name("component80()")));
- (SharedLong * _Nullable)component81 __attribute__((swift_name("component81()")));
- (SharedLong * _Nullable)component82 __attribute__((swift_name("component82()")));
- (SharedLicense * _Nullable)component83 __attribute__((swift_name("component83()")));
- (SharedLong * _Nullable)component84 __attribute__((swift_name("component84()")));
- (SharedLong * _Nullable)component85 __attribute__((swift_name("component85()")));
- (SharedLong * _Nullable)component86 __attribute__((swift_name("component86()")));
- (SharedBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRepository *)doCopyId:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID name:(NSString * _Nullable)name fullName:(NSString * _Nullable)fullName owner:(SharedOwner *)owner private:(SharedBoolean * _Nullable)private_ htmlURL:(NSString * _Nullable)htmlURL description:(NSString * _Nullable)description fork:(SharedBoolean * _Nullable)fork url:(NSString * _Nullable)url archiveURL:(NSString * _Nullable)archiveURL assigneesURL:(NSString * _Nullable)assigneesURL blobsURL:(NSString * _Nullable)blobsURL branchesURL:(NSString * _Nullable)branchesURL collaboratorsURL:(NSString * _Nullable)collaboratorsURL commentsURL:(NSString * _Nullable)commentsURL commitsURL:(NSString * _Nullable)commitsURL compareURL:(NSString * _Nullable)compareURL contentsURL:(NSString * _Nullable)contentsURL contributorsURL:(NSString * _Nullable)contributorsURL deploymentsURL:(NSString * _Nullable)deploymentsURL downloadsURL:(NSString * _Nullable)downloadsURL eventsURL:(NSString * _Nullable)eventsURL forksURL:(NSString * _Nullable)forksURL gitCommitsURL:(NSString * _Nullable)gitCommitsURL gitRefsURL:(NSString * _Nullable)gitRefsURL gitTagsURL:(NSString * _Nullable)gitTagsURL gitURL:(NSString * _Nullable)gitURL issueCommentURL:(NSString * _Nullable)issueCommentURL issueEventsURL:(NSString * _Nullable)issueEventsURL issuesURL:(NSString * _Nullable)issuesURL keysURL:(NSString * _Nullable)keysURL labelsURL:(NSString * _Nullable)labelsURL languagesURL:(NSString * _Nullable)languagesURL mergesURL:(NSString * _Nullable)mergesURL milestonesURL:(NSString * _Nullable)milestonesURL notificationsURL:(NSString * _Nullable)notificationsURL pullsURL:(NSString * _Nullable)pullsURL releasesURL:(NSString * _Nullable)releasesURL sshURL:(NSString * _Nullable)sshURL stargazersURL:(NSString * _Nullable)stargazersURL statusesURL:(NSString * _Nullable)statusesURL subscribersURL:(NSString * _Nullable)subscribersURL subscriptionURL:(NSString * _Nullable)subscriptionURL tagsURL:(NSString * _Nullable)tagsURL teamsURL:(NSString * _Nullable)teamsURL treesURL:(NSString * _Nullable)treesURL cloneURL:(NSString * _Nullable)cloneURL mirrorURL:(NSString * _Nullable)mirrorURL hooksURL:(NSString * _Nullable)hooksURL svnURL:(NSString * _Nullable)svnURL homepage:(NSString * _Nullable)homepage language:(NSString * _Nullable)language forksCount:(SharedLong * _Nullable)forksCount stargazersCount:(SharedLong * _Nullable)stargazersCount watchersCount:(SharedLong * _Nullable)watchersCount size:(SharedLong * _Nullable)size defaultBranch:(NSString * _Nullable)defaultBranch openIssuesCount:(SharedLong * _Nullable)openIssuesCount isTemplate:(SharedBoolean * _Nullable)isTemplate topics:(NSArray<id> *)topics hasIssues:(SharedBoolean * _Nullable)hasIssues hasProjects:(SharedBoolean * _Nullable)hasProjects hasWiki:(SharedBoolean * _Nullable)hasWiki hasPages:(SharedBoolean * _Nullable)hasPages hasDownloads:(SharedBoolean * _Nullable)hasDownloads archived:(SharedBoolean * _Nullable)archived disabled:(SharedBoolean * _Nullable)disabled visibility:(NSString * _Nullable)visibility pushedAt:(NSString * _Nullable)pushedAt createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt permissions:(SharedPermissions *)permissions allowRebaseMerge:(SharedBoolean * _Nullable)allowRebaseMerge templateRepository:(NSString * _Nullable)templateRepository tempCloneToken:(NSString * _Nullable)tempCloneToken allowSquashMerge:(SharedBoolean * _Nullable)allowSquashMerge allowAutoMerge:(SharedBoolean * _Nullable)allowAutoMerge deleteBranchOnMerge:(SharedBoolean * _Nullable)deleteBranchOnMerge allowMergeCommit:(SharedBoolean * _Nullable)allowMergeCommit subscribersCount:(SharedLong * _Nullable)subscribersCount networkCount:(SharedLong * _Nullable)networkCount license:(SharedLicense * _Nullable)license forks:(SharedLong * _Nullable)forks openIssues:(SharedLong * _Nullable)openIssues watchers:(SharedLong * _Nullable)watchers __attribute__((swift_name("doCopy(id:nodeID:name:fullName:owner:private:htmlURL:description:fork:url:archiveURL:assigneesURL:blobsURL:branchesURL:collaboratorsURL:commentsURL:commitsURL:compareURL:contentsURL:contributorsURL:deploymentsURL:downloadsURL:eventsURL:forksURL:gitCommitsURL:gitRefsURL:gitTagsURL:gitURL:issueCommentURL:issueEventsURL:issuesURL:keysURL:labelsURL:languagesURL:mergesURL:milestonesURL:notificationsURL:pullsURL:releasesURL:sshURL:stargazersURL:statusesURL:subscribersURL:subscriptionURL:tagsURL:teamsURL:treesURL:cloneURL:mirrorURL:hooksURL:svnURL:homepage:language:forksCount:stargazersCount:watchersCount:size:defaultBranch:openIssuesCount:isTemplate:topics:hasIssues:hasProjects:hasWiki:hasPages:hasDownloads:archived:disabled:visibility:pushedAt:createdAt:updatedAt:permissions:allowRebaseMerge:templateRepository:tempCloneToken:allowSquashMerge:allowAutoMerge:deleteBranchOnMerge:allowMergeCommit:subscribersCount:networkCount:license:forks:openIssues:watchers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable allowAutoMerge __attribute__((swift_name("allowAutoMerge")));
@property (readonly) SharedBoolean * _Nullable allowMergeCommit __attribute__((swift_name("allowMergeCommit")));
@property (readonly) SharedBoolean * _Nullable allowRebaseMerge __attribute__((swift_name("allowRebaseMerge")));
@property (readonly) SharedBoolean * _Nullable allowSquashMerge __attribute__((swift_name("allowSquashMerge")));
@property (readonly) NSString * _Nullable archiveURL __attribute__((swift_name("archiveURL")));
@property (readonly) SharedBoolean * _Nullable archived __attribute__((swift_name("archived")));
@property (readonly) NSString * _Nullable assigneesURL __attribute__((swift_name("assigneesURL")));
@property (readonly) NSString * _Nullable blobsURL __attribute__((swift_name("blobsURL")));
@property (readonly) NSString * _Nullable branchesURL __attribute__((swift_name("branchesURL")));
@property (readonly) NSString * _Nullable cloneURL __attribute__((swift_name("cloneURL")));
@property (readonly) NSString * _Nullable collaboratorsURL __attribute__((swift_name("collaboratorsURL")));
@property (readonly) NSString * _Nullable commentsURL __attribute__((swift_name("commentsURL")));
@property (readonly) NSString * _Nullable commitsURL __attribute__((swift_name("commitsURL")));
@property (readonly) NSString * _Nullable compareURL __attribute__((swift_name("compareURL")));
@property (readonly) NSString * _Nullable contentsURL __attribute__((swift_name("contentsURL")));
@property (readonly) NSString * _Nullable contributorsURL __attribute__((swift_name("contributorsURL")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable defaultBranch __attribute__((swift_name("defaultBranch")));
@property (readonly) SharedBoolean * _Nullable deleteBranchOnMerge __attribute__((swift_name("deleteBranchOnMerge")));
@property (readonly) NSString * _Nullable deploymentsURL __attribute__((swift_name("deploymentsURL")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) SharedBoolean * _Nullable disabled __attribute__((swift_name("disabled")));
@property (readonly) NSString * _Nullable downloadsURL __attribute__((swift_name("downloadsURL")));
@property (readonly) NSString * _Nullable eventsURL __attribute__((swift_name("eventsURL")));
@property (readonly) SharedBoolean * _Nullable fork __attribute__((swift_name("fork")));
@property (readonly) SharedLong * _Nullable forks __attribute__((swift_name("forks")));
@property (readonly) SharedLong * _Nullable forksCount __attribute__((swift_name("forksCount")));
@property (readonly) NSString * _Nullable forksURL __attribute__((swift_name("forksURL")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable gitCommitsURL __attribute__((swift_name("gitCommitsURL")));
@property (readonly) NSString * _Nullable gitRefsURL __attribute__((swift_name("gitRefsURL")));
@property (readonly) NSString * _Nullable gitTagsURL __attribute__((swift_name("gitTagsURL")));
@property (readonly) NSString * _Nullable gitURL __attribute__((swift_name("gitURL")));
@property (readonly) SharedBoolean * _Nullable hasDownloads __attribute__((swift_name("hasDownloads")));
@property (readonly) SharedBoolean * _Nullable hasIssues __attribute__((swift_name("hasIssues")));
@property (readonly) SharedBoolean * _Nullable hasPages __attribute__((swift_name("hasPages")));
@property (readonly) SharedBoolean * _Nullable hasProjects __attribute__((swift_name("hasProjects")));
@property (readonly) SharedBoolean * _Nullable hasWiki __attribute__((swift_name("hasWiki")));
@property (readonly) NSString * _Nullable homepage __attribute__((swift_name("homepage")));
@property (readonly) NSString * _Nullable hooksURL __attribute__((swift_name("hooksURL")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) SharedLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isTemplate __attribute__((swift_name("isTemplate")));
@property (readonly) NSString * _Nullable issueCommentURL __attribute__((swift_name("issueCommentURL")));
@property (readonly) NSString * _Nullable issueEventsURL __attribute__((swift_name("issueEventsURL")));
@property (readonly) NSString * _Nullable issuesURL __attribute__((swift_name("issuesURL")));
@property (readonly) NSString * _Nullable keysURL __attribute__((swift_name("keysURL")));
@property (readonly) NSString * _Nullable labelsURL __attribute__((swift_name("labelsURL")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString * _Nullable languagesURL __attribute__((swift_name("languagesURL")));
@property (readonly) SharedLicense * _Nullable license __attribute__((swift_name("license")));
@property (readonly) NSString * _Nullable mergesURL __attribute__((swift_name("mergesURL")));
@property (readonly) NSString * _Nullable milestonesURL __attribute__((swift_name("milestonesURL")));
@property (readonly) NSString * _Nullable mirrorURL __attribute__((swift_name("mirrorURL")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedLong * _Nullable networkCount __attribute__((swift_name("networkCount")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable notificationsURL __attribute__((swift_name("notificationsURL")));
@property (readonly) SharedLong * _Nullable openIssues __attribute__((swift_name("openIssues")));
@property (readonly) SharedLong * _Nullable openIssuesCount __attribute__((swift_name("openIssuesCount")));
@property (readonly) SharedOwner *owner __attribute__((swift_name("owner")));
@property (readonly) SharedPermissions *permissions __attribute__((swift_name("permissions")));
@property (readonly, getter=private) SharedBoolean * _Nullable private_ __attribute__((swift_name("private_")));
@property (readonly) NSString * _Nullable pullsURL __attribute__((swift_name("pullsURL")));
@property (readonly) NSString * _Nullable pushedAt __attribute__((swift_name("pushedAt")));
@property (readonly) NSString * _Nullable releasesURL __attribute__((swift_name("releasesURL")));
@property (readonly) SharedLong * _Nullable size __attribute__((swift_name("size")));
@property (readonly) NSString * _Nullable sshURL __attribute__((swift_name("sshURL")));
@property (readonly) SharedLong * _Nullable stargazersCount __attribute__((swift_name("stargazersCount")));
@property (readonly) NSString * _Nullable stargazersURL __attribute__((swift_name("stargazersURL")));
@property (readonly) NSString * _Nullable statusesURL __attribute__((swift_name("statusesURL")));
@property (readonly) SharedLong * _Nullable subscribersCount __attribute__((swift_name("subscribersCount")));
@property (readonly) NSString * _Nullable subscribersURL __attribute__((swift_name("subscribersURL")));
@property (readonly) NSString * _Nullable subscriptionURL __attribute__((swift_name("subscriptionURL")));
@property (readonly) NSString * _Nullable svnURL __attribute__((swift_name("svnURL")));
@property (readonly) NSString * _Nullable tagsURL __attribute__((swift_name("tagsURL")));
@property (readonly) NSString * _Nullable teamsURL __attribute__((swift_name("teamsURL")));
@property (readonly) NSString * _Nullable tempCloneToken __attribute__((swift_name("tempCloneToken")));
@property (readonly) NSString * _Nullable templateRepository __attribute__((swift_name("templateRepository")));
@property (readonly) NSArray<id> *topics __attribute__((swift_name("topics")));
@property (readonly) NSString * _Nullable treesURL __attribute__((swift_name("treesURL")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@property (readonly) SharedLong * _Nullable watchers __attribute__((swift_name("watchers")));
@property (readonly) SharedLong * _Nullable watchersCount __attribute__((swift_name("watchersCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoryNoti")))
@interface SharedRepositoryNoti : SharedBase
- (instancetype)initWithId:(int64_t)id nodeID:(NSString * _Nullable)nodeID name:(NSString * _Nullable)name fullName:(NSString * _Nullable)fullName private:(BOOL)private_ owner:(SharedOwnerNoti *)owner htmlURL:(NSString * _Nullable)htmlURL description:(NSString * _Nullable)description fork:(BOOL)fork url:(NSString * _Nullable)url forksURL:(NSString * _Nullable)forksURL keysURL:(NSString * _Nullable)keysURL collaboratorsURL:(NSString * _Nullable)collaboratorsURL teamsURL:(NSString * _Nullable)teamsURL hooksURL:(NSString * _Nullable)hooksURL issueEventsURL:(NSString * _Nullable)issueEventsURL eventsURL:(NSString * _Nullable)eventsURL assigneesURL:(NSString * _Nullable)assigneesURL branchesURL:(NSString * _Nullable)branchesURL tagsURL:(NSString * _Nullable)tagsURL blobsURL:(NSString * _Nullable)blobsURL gitTagsURL:(NSString * _Nullable)gitTagsURL gitRefsURL:(NSString * _Nullable)gitRefsURL treesURL:(NSString * _Nullable)treesURL statusesURL:(NSString * _Nullable)statusesURL languagesURL:(NSString * _Nullable)languagesURL stargazersURL:(NSString * _Nullable)stargazersURL contributorsURL:(NSString * _Nullable)contributorsURL subscribersURL:(NSString * _Nullable)subscribersURL subscriptionURL:(NSString * _Nullable)subscriptionURL commitsURL:(NSString * _Nullable)commitsURL gitCommitsURL:(NSString * _Nullable)gitCommitsURL commentsURL:(NSString * _Nullable)commentsURL issueCommentURL:(NSString * _Nullable)issueCommentURL contentsURL:(NSString * _Nullable)contentsURL compareURL:(NSString * _Nullable)compareURL mergesURL:(NSString * _Nullable)mergesURL archiveURL:(NSString * _Nullable)archiveURL downloadsURL:(NSString * _Nullable)downloadsURL issuesURL:(NSString * _Nullable)issuesURL pullsURL:(NSString * _Nullable)pullsURL milestonesURL:(NSString * _Nullable)milestonesURL notificationsURL:(NSString * _Nullable)notificationsURL labelsURL:(NSString * _Nullable)labelsURL releasesURL:(NSString * _Nullable)releasesURL deploymentsURL:(NSString * _Nullable)deploymentsURL __attribute__((swift_name("init(id:nodeID:name:fullName:private:owner:htmlURL:description:fork:url:forksURL:keysURL:collaboratorsURL:teamsURL:hooksURL:issueEventsURL:eventsURL:assigneesURL:branchesURL:tagsURL:blobsURL:gitTagsURL:gitRefsURL:treesURL:statusesURL:languagesURL:stargazersURL:contributorsURL:subscribersURL:subscriptionURL:commitsURL:gitCommitsURL:commentsURL:issueCommentURL:contentsURL:compareURL:mergesURL:archiveURL:downloadsURL:issuesURL:pullsURL:milestonesURL:notificationsURL:labelsURL:releasesURL:deploymentsURL:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSString * _Nullable)component34 __attribute__((swift_name("component34()")));
- (NSString * _Nullable)component35 __attribute__((swift_name("component35()")));
- (NSString * _Nullable)component36 __attribute__((swift_name("component36()")));
- (NSString * _Nullable)component37 __attribute__((swift_name("component37()")));
- (NSString * _Nullable)component38 __attribute__((swift_name("component38()")));
- (NSString * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component40 __attribute__((swift_name("component40()")));
- (NSString * _Nullable)component41 __attribute__((swift_name("component41()")));
- (NSString * _Nullable)component42 __attribute__((swift_name("component42()")));
- (NSString * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component44 __attribute__((swift_name("component44()")));
- (NSString * _Nullable)component45 __attribute__((swift_name("component45()")));
- (NSString * _Nullable)component46 __attribute__((swift_name("component46()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedOwnerNoti *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedRepositoryNoti *)doCopyId:(int64_t)id nodeID:(NSString * _Nullable)nodeID name:(NSString * _Nullable)name fullName:(NSString * _Nullable)fullName private:(BOOL)private_ owner:(SharedOwnerNoti *)owner htmlURL:(NSString * _Nullable)htmlURL description:(NSString * _Nullable)description fork:(BOOL)fork url:(NSString * _Nullable)url forksURL:(NSString * _Nullable)forksURL keysURL:(NSString * _Nullable)keysURL collaboratorsURL:(NSString * _Nullable)collaboratorsURL teamsURL:(NSString * _Nullable)teamsURL hooksURL:(NSString * _Nullable)hooksURL issueEventsURL:(NSString * _Nullable)issueEventsURL eventsURL:(NSString * _Nullable)eventsURL assigneesURL:(NSString * _Nullable)assigneesURL branchesURL:(NSString * _Nullable)branchesURL tagsURL:(NSString * _Nullable)tagsURL blobsURL:(NSString * _Nullable)blobsURL gitTagsURL:(NSString * _Nullable)gitTagsURL gitRefsURL:(NSString * _Nullable)gitRefsURL treesURL:(NSString * _Nullable)treesURL statusesURL:(NSString * _Nullable)statusesURL languagesURL:(NSString * _Nullable)languagesURL stargazersURL:(NSString * _Nullable)stargazersURL contributorsURL:(NSString * _Nullable)contributorsURL subscribersURL:(NSString * _Nullable)subscribersURL subscriptionURL:(NSString * _Nullable)subscriptionURL commitsURL:(NSString * _Nullable)commitsURL gitCommitsURL:(NSString * _Nullable)gitCommitsURL commentsURL:(NSString * _Nullable)commentsURL issueCommentURL:(NSString * _Nullable)issueCommentURL contentsURL:(NSString * _Nullable)contentsURL compareURL:(NSString * _Nullable)compareURL mergesURL:(NSString * _Nullable)mergesURL archiveURL:(NSString * _Nullable)archiveURL downloadsURL:(NSString * _Nullable)downloadsURL issuesURL:(NSString * _Nullable)issuesURL pullsURL:(NSString * _Nullable)pullsURL milestonesURL:(NSString * _Nullable)milestonesURL notificationsURL:(NSString * _Nullable)notificationsURL labelsURL:(NSString * _Nullable)labelsURL releasesURL:(NSString * _Nullable)releasesURL deploymentsURL:(NSString * _Nullable)deploymentsURL __attribute__((swift_name("doCopy(id:nodeID:name:fullName:private:owner:htmlURL:description:fork:url:forksURL:keysURL:collaboratorsURL:teamsURL:hooksURL:issueEventsURL:eventsURL:assigneesURL:branchesURL:tagsURL:blobsURL:gitTagsURL:gitRefsURL:treesURL:statusesURL:languagesURL:stargazersURL:contributorsURL:subscribersURL:subscriptionURL:commitsURL:gitCommitsURL:commentsURL:issueCommentURL:contentsURL:compareURL:mergesURL:archiveURL:downloadsURL:issuesURL:pullsURL:milestonesURL:notificationsURL:labelsURL:releasesURL:deploymentsURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable archiveURL __attribute__((swift_name("archiveURL")));
@property (readonly) NSString * _Nullable assigneesURL __attribute__((swift_name("assigneesURL")));
@property (readonly) NSString * _Nullable blobsURL __attribute__((swift_name("blobsURL")));
@property (readonly) NSString * _Nullable branchesURL __attribute__((swift_name("branchesURL")));
@property (readonly) NSString * _Nullable collaboratorsURL __attribute__((swift_name("collaboratorsURL")));
@property (readonly) NSString * _Nullable commentsURL __attribute__((swift_name("commentsURL")));
@property (readonly) NSString * _Nullable commitsURL __attribute__((swift_name("commitsURL")));
@property (readonly) NSString * _Nullable compareURL __attribute__((swift_name("compareURL")));
@property (readonly) NSString * _Nullable contentsURL __attribute__((swift_name("contentsURL")));
@property (readonly) NSString * _Nullable contributorsURL __attribute__((swift_name("contributorsURL")));
@property (readonly) NSString * _Nullable deploymentsURL __attribute__((swift_name("deploymentsURL")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable downloadsURL __attribute__((swift_name("downloadsURL")));
@property (readonly) NSString * _Nullable eventsURL __attribute__((swift_name("eventsURL")));
@property (readonly) BOOL fork __attribute__((swift_name("fork")));
@property (readonly) NSString * _Nullable forksURL __attribute__((swift_name("forksURL")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable gitCommitsURL __attribute__((swift_name("gitCommitsURL")));
@property (readonly) NSString * _Nullable gitRefsURL __attribute__((swift_name("gitRefsURL")));
@property (readonly) NSString * _Nullable gitTagsURL __attribute__((swift_name("gitTagsURL")));
@property (readonly) NSString * _Nullable hooksURL __attribute__((swift_name("hooksURL")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable issueCommentURL __attribute__((swift_name("issueCommentURL")));
@property (readonly) NSString * _Nullable issueEventsURL __attribute__((swift_name("issueEventsURL")));
@property (readonly) NSString * _Nullable issuesURL __attribute__((swift_name("issuesURL")));
@property (readonly) NSString * _Nullable keysURL __attribute__((swift_name("keysURL")));
@property (readonly) NSString * _Nullable labelsURL __attribute__((swift_name("labelsURL")));
@property (readonly) NSString * _Nullable languagesURL __attribute__((swift_name("languagesURL")));
@property (readonly) NSString * _Nullable mergesURL __attribute__((swift_name("mergesURL")));
@property (readonly) NSString * _Nullable milestonesURL __attribute__((swift_name("milestonesURL")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable notificationsURL __attribute__((swift_name("notificationsURL")));
@property (readonly) SharedOwnerNoti *owner __attribute__((swift_name("owner")));
@property (readonly, getter=private) BOOL private_ __attribute__((swift_name("private_")));
@property (readonly) NSString * _Nullable pullsURL __attribute__((swift_name("pullsURL")));
@property (readonly) NSString * _Nullable releasesURL __attribute__((swift_name("releasesURL")));
@property (readonly) NSString * _Nullable stargazersURL __attribute__((swift_name("stargazersURL")));
@property (readonly) NSString * _Nullable statusesURL __attribute__((swift_name("statusesURL")));
@property (readonly) NSString * _Nullable subscribersURL __attribute__((swift_name("subscribersURL")));
@property (readonly) NSString * _Nullable subscriptionURL __attribute__((swift_name("subscriptionURL")));
@property (readonly) NSString * _Nullable tagsURL __attribute__((swift_name("tagsURL")));
@property (readonly) NSString * _Nullable teamsURL __attribute__((swift_name("teamsURL")));
@property (readonly) NSString * _Nullable treesURL __attribute__((swift_name("treesURL")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subject")))
@interface SharedSubject : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title url:(NSString * _Nullable)url latestCommentURL:(NSString * _Nullable)latestCommentURL type:(NSString * _Nullable)type __attribute__((swift_name("init(title:url:latestCommentURL:type:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedSubject *)doCopyTitle:(NSString * _Nullable)title url:(NSString * _Nullable)url latestCommentURL:(NSString * _Nullable)latestCommentURL type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(title:url:latestCommentURL:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable latestCommentURL __attribute__((swift_name("latestCommentURL")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface SharedUser : SharedBase
- (instancetype)initWithLogin:(NSString * _Nullable)login id:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(SharedBoolean * _Nullable)siteAdmin name:(NSString * _Nullable)name company:(NSString * _Nullable)company blog:(NSString * _Nullable)blog location:(NSString * _Nullable)location email:(NSString * _Nullable)email hireable:(SharedBoolean * _Nullable)hireable bio:(NSString * _Nullable)bio twitterUsername:(NSString * _Nullable)twitterUsername publicRepos:(SharedLong * _Nullable)publicRepos publicGists:(SharedLong * _Nullable)publicGists followers:(SharedLong * _Nullable)followers following:(SharedLong * _Nullable)following createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt privateGists:(SharedLong * _Nullable)privateGists totalPrivateRepos:(SharedLong * _Nullable)totalPrivateRepos ownedPrivateRepos:(SharedLong * _Nullable)ownedPrivateRepos diskUsage:(SharedLong * _Nullable)diskUsage collaborators:(SharedLong * _Nullable)collaborators twoFactorAuthentication:(SharedBoolean * _Nullable)twoFactorAuthentication plan:(SharedPlan * _Nullable)plan pinned:(NSArray<SharedPinnedRepo *> * _Nullable)pinned starts:(int64_t)starts totalRepos:(int64_t)totalRepos totalOrganizations:(int64_t)totalOrganizations __attribute__((swift_name("init(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:name:company:blog:location:email:hireable:bio:twitterUsername:publicRepos:publicGists:followers:following:createdAt:updatedAt:privateGists:totalPrivateRepos:ownedPrivateRepos:diskUsage:collaborators:twoFactorAuthentication:plan:pinned:starts:totalRepos:totalOrganizations:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (SharedLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (SharedBoolean * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (SharedLong * _Nullable)component27 __attribute__((swift_name("component27()")));
- (SharedLong * _Nullable)component28 __attribute__((swift_name("component28()")));
- (SharedLong * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLong * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (SharedLong * _Nullable)component33 __attribute__((swift_name("component33()")));
- (SharedLong * _Nullable)component34 __attribute__((swift_name("component34()")));
- (SharedLong * _Nullable)component35 __attribute__((swift_name("component35()")));
- (SharedLong * _Nullable)component36 __attribute__((swift_name("component36()")));
- (SharedLong * _Nullable)component37 __attribute__((swift_name("component37()")));
- (SharedBoolean * _Nullable)component38 __attribute__((swift_name("component38()")));
- (SharedPlan * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedPinnedRepo *> * _Nullable)component40 __attribute__((swift_name("component40()")));
- (int64_t)component41 __attribute__((swift_name("component41()")));
- (int64_t)component42 __attribute__((swift_name("component42()")));
- (int64_t)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedUser *)doCopyLogin:(NSString * _Nullable)login id:(SharedLong * _Nullable)id nodeID:(NSString * _Nullable)nodeID avatarURL:(NSString * _Nullable)avatarURL gravatarID:(NSString * _Nullable)gravatarID url:(NSString * _Nullable)url htmlURL:(NSString * _Nullable)htmlURL followersURL:(NSString * _Nullable)followersURL followingURL:(NSString * _Nullable)followingURL gistsURL:(NSString * _Nullable)gistsURL starredURL:(NSString * _Nullable)starredURL subscriptionsURL:(NSString * _Nullable)subscriptionsURL organizationsURL:(NSString * _Nullable)organizationsURL reposURL:(NSString * _Nullable)reposURL eventsURL:(NSString * _Nullable)eventsURL receivedEventsURL:(NSString * _Nullable)receivedEventsURL type:(NSString * _Nullable)type siteAdmin:(SharedBoolean * _Nullable)siteAdmin name:(NSString * _Nullable)name company:(NSString * _Nullable)company blog:(NSString * _Nullable)blog location:(NSString * _Nullable)location email:(NSString * _Nullable)email hireable:(SharedBoolean * _Nullable)hireable bio:(NSString * _Nullable)bio twitterUsername:(NSString * _Nullable)twitterUsername publicRepos:(SharedLong * _Nullable)publicRepos publicGists:(SharedLong * _Nullable)publicGists followers:(SharedLong * _Nullable)followers following:(SharedLong * _Nullable)following createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt privateGists:(SharedLong * _Nullable)privateGists totalPrivateRepos:(SharedLong * _Nullable)totalPrivateRepos ownedPrivateRepos:(SharedLong * _Nullable)ownedPrivateRepos diskUsage:(SharedLong * _Nullable)diskUsage collaborators:(SharedLong * _Nullable)collaborators twoFactorAuthentication:(SharedBoolean * _Nullable)twoFactorAuthentication plan:(SharedPlan * _Nullable)plan pinned:(NSArray<SharedPinnedRepo *> * _Nullable)pinned starts:(int64_t)starts totalRepos:(int64_t)totalRepos totalOrganizations:(int64_t)totalOrganizations __attribute__((swift_name("doCopy(login:id:nodeID:avatarURL:gravatarID:url:htmlURL:followersURL:followingURL:gistsURL:starredURL:subscriptionsURL:organizationsURL:reposURL:eventsURL:receivedEventsURL:type:siteAdmin:name:company:blog:location:email:hireable:bio:twitterUsername:publicRepos:publicGists:followers:following:createdAt:updatedAt:privateGists:totalPrivateRepos:ownedPrivateRepos:diskUsage:collaborators:twoFactorAuthentication:plan:pinned:starts:totalRepos:totalOrganizations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarURL __attribute__((swift_name("avatarURL")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable blog __attribute__((swift_name("blog")));
@property (readonly) SharedLong * _Nullable collaborators __attribute__((swift_name("collaborators")));
@property (readonly) NSString * _Nullable company __attribute__((swift_name("company")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) SharedLong * _Nullable diskUsage __attribute__((swift_name("diskUsage")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable eventsURL __attribute__((swift_name("eventsURL")));
@property (readonly) SharedLong * _Nullable followers __attribute__((swift_name("followers")));
@property (readonly) NSString * _Nullable followersURL __attribute__((swift_name("followersURL")));
@property (readonly) SharedLong * _Nullable following __attribute__((swift_name("following")));
@property (readonly) NSString * _Nullable followingURL __attribute__((swift_name("followingURL")));
@property (readonly) NSString * _Nullable gistsURL __attribute__((swift_name("gistsURL")));
@property (readonly) NSString * _Nullable gravatarID __attribute__((swift_name("gravatarID")));
@property (readonly) SharedBoolean * _Nullable hireable __attribute__((swift_name("hireable")));
@property (readonly) NSString * _Nullable htmlURL __attribute__((swift_name("htmlURL")));
@property (readonly) SharedLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable login __attribute__((swift_name("login")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nodeID __attribute__((swift_name("nodeID")));
@property (readonly) NSString * _Nullable organizationsURL __attribute__((swift_name("organizationsURL")));
@property (readonly) SharedLong * _Nullable ownedPrivateRepos __attribute__((swift_name("ownedPrivateRepos")));
@property (readonly) NSArray<SharedPinnedRepo *> * _Nullable pinned __attribute__((swift_name("pinned")));
@property (readonly) SharedPlan * _Nullable plan __attribute__((swift_name("plan")));
@property (readonly) SharedLong * _Nullable privateGists __attribute__((swift_name("privateGists")));
@property (readonly) SharedLong * _Nullable publicGists __attribute__((swift_name("publicGists")));
@property (readonly) SharedLong * _Nullable publicRepos __attribute__((swift_name("publicRepos")));
@property (readonly) NSString * _Nullable receivedEventsURL __attribute__((swift_name("receivedEventsURL")));
@property (readonly) NSString * _Nullable reposURL __attribute__((swift_name("reposURL")));
@property (readonly) SharedBoolean * _Nullable siteAdmin __attribute__((swift_name("siteAdmin")));
@property (readonly) NSString * _Nullable starredURL __attribute__((swift_name("starredURL")));
@property (readonly) int64_t starts __attribute__((swift_name("starts")));
@property (readonly) NSString * _Nullable subscriptionsURL __attribute__((swift_name("subscriptionsURL")));
@property (readonly) int64_t totalOrganizations __attribute__((swift_name("totalOrganizations")));
@property (readonly) SharedLong * _Nullable totalPrivateRepos __attribute__((swift_name("totalPrivateRepos")));
@property (readonly) int64_t totalRepos __attribute__((swift_name("totalRepos")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) SharedBoolean * _Nullable twoFactorAuthentication __attribute__((swift_name("twoFactorAuthentication")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("UseCase")))
@protocol SharedUseCase
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(id _Nullable)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddRepositoriesFavoriteUseCase")))
@interface SharedAddRepositoriesFavoriteUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(NSString *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentUserUseCase")))
@interface SharedGetCurrentUserUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(SharedKotlinUnit *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNotificationsUseCase")))
@interface SharedGetNotificationsUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(SharedInt *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetRepositoriesFavoritePaginatedUseCase")))
@interface SharedGetRepositoriesFavoritePaginatedUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(SharedKotlinUnit *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetRepositoriesPaginatedUseCase")))
@interface SharedGetRepositoriesPaginatedUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(SharedInt *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetStarredRepositoriesPaginatedUseCase")))
@interface SharedGetStarredRepositoriesPaginatedUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(SharedInt *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveRepositoriesFavoriteUseCase")))
@interface SharedRemoveRepositoriesFavoriteUseCase : SharedBase <SharedUseCase>
- (instancetype)initWithRepository:(id<SharedRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(NSString *)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end;

__attribute__((swift_name("Store")))
@protocol SharedStore
@required
- (id _Nullable)state __attribute__((swift_name("state()")));
- (SharedSubscription *)subscribeSubscriber:(void (^)(id _Nullable))subscriber __attribute__((swift_name("subscribe(subscriber:)")));
- (void)unsubscribeSubscription:(SharedSubscription *)subscription __attribute__((swift_name("unsubscribe(subscription:)")));
@property (readonly) id<SharedKotlinSuspendFunction1> dispatch __attribute__((swift_name("dispatch")));
@property (readonly) id _Nullable enviroment __attribute__((swift_name("enviroment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subscription")))
@interface SharedSubscription : SharedBase
- (instancetype)initWithHash:(NSString *)hash __attribute__((swift_name("init(hash:)"))) __attribute__((objc_designated_initializer));
- (SharedSubscription *)doCopyHash:(NSString *)hash __attribute__((swift_name("doCopy(hash:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKoin_coreKoinComponent
@required
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonComponent")))
@interface SharedCommonComponent : SharedBase <SharedKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCommonComponentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedEnviroment *environment __attribute__((swift_name("environment")));
@property (readonly) id<SharedDataOauth> oauth __attribute__((swift_name("oauth")));
@property (readonly) id<SharedMultiplatform_settingsSettings> preferences __attribute__((swift_name("preferences")));
@property (readonly) id<SharedStore> redux __attribute__((swift_name("redux")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonComponent.Companion")))
@interface SharedCommonComponentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCommonComponentCompanion *shared __attribute__((swift_name("shared")));
- (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
- (void)doInitKoinKoinScope:(void (^)(SharedKoin_coreKoinApplication *))koinScope __attribute__((swift_name("doInitKoin(koinScope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiddlewareKt")))
@interface SharedMiddlewareKt : SharedBase
@property (class, readonly) id<SharedKotlinSuspendFunction1> (^(^(^apiMiddleware)(id<SharedKotlinSuspendFunction1>))(id<SharedStore>))(id<SharedKotlinSuspendFunction1>) __attribute__((swift_name("apiMiddleware")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingKt")))
@interface SharedSettingKt : SharedBase
@property (class, readonly) SharedKoin_coreModule *diPlatform __attribute__((swift_name("diPlatform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainReducerKt")))
@interface SharedMainReducerKt : SharedBase
+ (SharedFavorites *)favoritesReducerState:(SharedFavorites *)state actions:(id<SharedActions>)actions __attribute__((swift_name("favoritesReducer(state:actions:)")));
+ (SharedAppState *)mainReducerState:(SharedAppState *)state actions:(id<SharedActions>)actions __attribute__((swift_name("mainReducer(state:actions:)")));
+ (SharedNotificationsState *)notificationsReducerState:(SharedNotificationsState *)state actions:(id<SharedActions>)actions __attribute__((swift_name("notificationsReducer(state:actions:)")));
+ (SharedUserProfile *)profileReducerState:(SharedUserProfile *)state actions:(id<SharedActions>)actions __attribute__((swift_name("profileReducer(state:actions:)")));
+ (SharedRepos *)reposReducerState:(SharedRepos *)state actions:(id<SharedActions>)actions __attribute__((swift_name("reposReducer(state:actions:)")));
+ (SharedStarred *)starredReducerState:(SharedStarred *)state actions:(id<SharedActions>)actions __attribute__((swift_name("starredReducer(state:actions:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreKt")))
@interface SharedStoreKt : SharedBase
+ (id<SharedStore>)storeEnvironment:(SharedEnviroment *)environment __attribute__((swift_name("store(environment:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreHelperKt")))
@interface SharedStoreHelperKt : SharedBase
+ (SharedSubscription *)collect:(id<SharedStore>)receiver selector:(void (^)(SharedAppState *))selector __attribute__((swift_name("collect(_:selector:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreKt_")))
@interface SharedStoreKt_ : SharedBase
+ (id<SharedStore>)createStoreInitalState:(id)initalState reducer:(id (^)(id, id))reducer middleware:(NSArray<id<SharedKotlinSuspendFunction1> (^(^(^)(id<SharedKotlinSuspendFunction1>))(id<SharedStore>))(id<SharedKotlinSuspendFunction1>)> *)middleware appEnviroment:(id _Nullable)appEnviroment __attribute__((swift_name("createStore(initalState:reducer:middleware:appEnviroment:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIKt")))
@interface SharedDIKt : SharedBase
@property (class, readonly) SharedKoin_coreModule *di __attribute__((swift_name("di")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKoin_coreKoin : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreScope *)createScopeT:(id<SharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) SharedKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("DataOauth")))
@protocol SharedDataOauth
@required
- (NSString *)getUrlLaunchFlow __attribute__((swift_name("getUrlLaunchFlow()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestTokenCode:(NSString *)code state:(NSString *)state completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToken(code:state:completionHandler:)")));
@end;

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol SharedMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (SharedBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (SharedDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (SharedFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (SharedInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (SharedLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKoin_coreKoinApplication : SharedBase
@property (class, readonly, getter=companion) SharedKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreKoinApplication *)loggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoin_coreKoinApplication *)modulesModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoin_coreKoinApplication *)modulesModules__:(SharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoin_coreKoinApplication *)printLoggerLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKoin_coreModule : SharedBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKotlinPair<SharedKoin_coreModule *, SharedKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(SharedKotlinArray<SharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<SharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModule:(SharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<SharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (SharedKotlinPair<SharedKoin_coreModule *, SharedKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) SharedMutableSet<SharedKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Koin_coreLockable")))
@interface SharedKoin_coreLockable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKoin_coreScope : SharedKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (id<SharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (SharedKoin_coreScope *)doCopyScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<SharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<SharedKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol SharedKoin_coreKoinScopeComponent <SharedKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface SharedKoin_coreParametersHolder : SharedBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (SharedKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size_ __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKotlinLazyThreadSafetyMode : SharedKotlinEnum<SharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKoin_coreLogger : SharedBase
- (instancetype)initWithLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(SharedKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(SharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property SharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface SharedKoin_coreInstanceRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(SharedKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKoin_corePropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKoin_coreScopeRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<SharedKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) SharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<SharedKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface SharedKoin_coreKoinApplicationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (SharedKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKoin_coreLevel : SharedKotlinEnum<SharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKoin_coreLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface SharedKoin_coreInstanceFactory<T> : SharedKoin_coreLockable
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) SharedKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKoin_coreScopeDSL : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier module:(SharedKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<SharedKoin_coreModule *, SharedKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (SharedKotlinPair<SharedKoin_coreModule *, SharedKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (SharedKotlinPair<SharedKoin_coreModule *, SharedKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) SharedKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface SharedKoin_coreSingleInstanceFactory<T> : SharedKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface SharedKoin_coreParametersHolderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface SharedKoin_coreScopeRegistryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKoin_coreBeanDefinition<T> : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<SharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (SharedKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<SharedKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (SharedKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<SharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) SharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface SharedKoin_coreInstanceFactoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface SharedKoin_coreInstanceContext : SharedBase
- (instancetype)initWithKoin:(SharedKoin_coreKoin *)koin scope:(SharedKoin_coreScope *)scope parameters:(SharedKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) SharedKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKoin_coreKind : SharedKotlinEnum<SharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) SharedKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) SharedKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (SharedKotlinArray<SharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKoin_coreCallbacks<T> : SharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (SharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
