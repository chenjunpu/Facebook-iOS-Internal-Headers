//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBBookmarksAddToFavoritesInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSArray *_favoritedBookmarkIds;
    NSString *_environment;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *favoritedBookmarkIds; // @synthesize favoritedBookmarkIds=_favoritedBookmarkIds;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

