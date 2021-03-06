//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBModelObjectProtocol-Protocol.h"

@class FBMemContactRecommendationField, FBMemEventCategoryData, FBMemEventMembersConnection, FBMemEventTimeRange, FBMemFocusedPhoto, FBMemFriendsWhoLikeConnection, FBMemFriendsWhoVisitedConnection, FBMemGroup, FBMemGroupFeedConnection, FBMemGroupMembersConnection, FBMemImage, FBMemLocation, FBMemMutualFriendsConnection, FBMemName, FBMemOpenGraphObject, FBMemPage, FBMemPageLikersConnection, FBMemPageMenuInfo, FBMemPhoto, FBMemPhotosTakenOfConnection, FBMemPrivacyScope, FBMemStreetAddress, FBMemTextWithEntities, FBMemTimelineAppCollection, NSArray, NSNumber, NSString;
@protocol FBQueriedActorFieldsProtocol, FBQueriedPlaceFieldsProtocol;

@protocol FBQueriedProfileFieldsProtocol <FBModelObjectProtocol>
- (FBMemTextWithEntities *)visibilitySentence;
- (NSString *)visibility;
- (NSArray *)viewerTimelineCollectionsSupported;
- (NSArray *)viewerTimelineCollectionsContaining;
- (FBMemContactRecommendationField *)viewerRecommendation;
- (NSArray *)viewerProfilePermissions;
- (NSString *)viewerPostStatus;
- (FBMemTextWithEntities *)viewerLikesSentence;
- (NSString *)viewerJoinState;
- (NSString *)viewerGuestStatus;
- (FBMemTextWithEntities *)viewerDoesNotLikeSentence;
- (NSString *)username;
- (NSString *)urlString;
- (FBMemImage *)tvProfilePicture64;
- (NSString *)trendingTopicName;
- (FBMemImage *)topicCoverImage;
- (FBMemOpenGraphObject *)topSharedObject;
- (NSString *)timeRangeSentence;
- (FBMemEventTimeRange *)timeRange;
- (NSString *)tag;
- (NSString *)subscribeStatus;
- (FBMemName *)structuredName;
- (NSString *)startTimeSentence;
- (FBMemImage *)sportsTeamProfilePicture64;
- (FBMemTextWithEntities *)socialContextForNonLikingViewer;
- (FBMemTextWithEntities *)socialContext;
- (NSArray *)shortCategoryNames;
- (NSString *)secondarySubscribeStatus;
- (FBMemTimelineAppCollection *)savedCollection;
- (BOOL)requiresAdminMembershipApprovalValue;
- (NSNumber *)requiresAdminMembershipApproval;
- (NSString *)relatedArticleTitle;
- (NSArray *)redirectionInfo;
- (BOOL)profilePictureIsSilhouetteValue;
- (NSNumber *)profilePictureIsSilhouette;
- (FBMemImage *)profilePicture94;
- (FBMemImage *)profilePicture74;
- (FBMemImage *)profilePicture56;
- (FBMemImage *)profilePicture52;
- (FBMemImage *)profilePicture50;
- (FBMemImage *)profilePicture320;
- (FBMemImage *)profilePicture32;
- (FBMemImage *)profilePicture180;
- (FBMemImage *)profilePicture130;
- (FBMemImage *)profilePicture;
- (FBMemPhoto *)profilePhoto;
- (FBMemPrivacyScope *)privacyScope;
- (NSString *)priceRange;
- (NSString *)playableURLString;
- (NSString *)placeholderImageType;
- (NSString *)placeType;
- (FBMemPhotosTakenOfConnection *)photosTakenOf;
- (FBMemGroup *)parentGroup;
- (FBMemPageLikersConnection *)pageLikers;
- (FBMemTextWithEntities *)pageDescription;
- (FBMemPage *)page;
- (NSArray *)nameSearchTokens;
- (NSString *)name;
- (FBMemMutualFriendsConnection *)mutualFriends;
- (FBMemOpenGraphObject *)musicObject;
- (FBMemPageMenuInfo *)menuInfo;
- (FBMemTextWithEntities *)longDescription;
- (FBMemLocation *)location;
- (int)likeCountValue;
- (NSNumber *)likeCount;
- (BOOL)isViewerAdminValue;
- (NSNumber *)isViewerAdmin;
- (BOOL)isVerifiedValue;
- (NSNumber *)isVerified;
- (BOOL)isPymlBlacklistedValue;
- (NSNumber *)isPymlBlacklisted;
- (BOOL)isPlayableValue;
- (NSNumber *)isPlayable;
- (BOOL)isInlineAppStoreFlowSupportedValue;
- (NSNumber *)isInlineAppStoreFlowSupported;
- (BOOL)isForsaleGroupValue;
- (NSNumber *)isForsaleGroup;
- (BOOL)isAllDayValue;
- (NSNumber *)isAllDay;
- (NSArray *)hours;
- (BOOL)hasViewerSavedValue;
- (NSNumber *)hasViewerSaved;
- (BOOL)hasEnabledRankedCommentsValue;
- (NSNumber *)hasEnabledRankedComments;
- (int)groupMembersViewerFriendCountValue;
- (NSNumber *)groupMembersViewerFriendCount;
- (FBMemGroupMembersConnection *)groupMembers;
- (FBMemGroupFeedConnection *)groupFeed;
- (NSString *)graphQLID;
- (NSString *)friendshipStatus;
- (FBMemFriendsWhoVisitedConnection *)friendsWhoVisited;
- (FBMemFriendsWhoLikeConnection *)friendsWhoLike;
- (FBMemImage *)feedAwesomizerProfilePicture;
- (NSString *)eventsCalendarSubscriptionStatus;
- (int)eventsCalendarSubscriberCountValue;
- (NSNumber *)eventsCalendarSubscriberCount;
- (BOOL)eventsCalendarCanViewerSubscribeValue;
- (NSNumber *)eventsCalendarCanViewerSubscribe;
- (NSString *)eventPrivacyType;
- (id <FBQueriedPlaceFieldsProtocol>)eventPlace;
- (FBMemEventMembersConnection *)eventMembers;
- (NSString *)eventKind;
- (FBMemTextWithEntities *)eventDescription;
- (id <FBQueriedActorFieldsProtocol>)eventCreator;
- (FBMemEventCategoryData *)eventCategoryInfo;
- (BOOL)doesViewerLikeValue;
- (NSNumber *)doesViewerLike;
- (NSString *)displayName;
- (NSString *)descriptionText;
- (FBMemFocusedPhoto *)coverPhoto;
- (NSString *)connectionStyle;
- (double)communicationRankValue;
- (NSNumber *)communicationRank;
- (NSString *)categoryType;
- (NSArray *)categoryNames;
- (BOOL)canViewerPostPhotoToTimelineValue;
- (NSNumber *)canViewerPostPhotoToTimeline;
- (BOOL)canViewerPostValue;
- (NSNumber *)canViewerPost;
- (BOOL)canViewerLikeValue;
- (NSNumber *)canViewerLike;
- (BOOL)canViewerJoinValue;
- (NSNumber *)canViewerJoin;
- (BOOL)canViewerActAsMemorialContactValue;
- (NSNumber *)canViewerActAsMemorialContact;
- (BOOL)canGuestsInviteFriendsValue;
- (NSNumber *)canGuestsInviteFriends;
- (NSArray *)bylines;
- (FBMemTextWithEntities *)bestDescription;
- (double)averageStarRatingValue;
- (NSNumber *)averageStarRating;
- (FBMemImage *)appCenterCoverImage;
- (FBMemStreetAddress *)address;
- (FBMemTextWithEntities *)about;
@end

