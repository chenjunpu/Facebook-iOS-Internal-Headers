//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBCityStreetSearchInputQueryParamsViewerCoordinates, NSString;

@interface FBCityStreetSearchInputQueryParams : FBGraphQLInput
{
    NSString *_query;
    FBCityStreetSearchInputQueryParamsViewerCoordinates *_viewerCoordinates;
}

@property(copy, nonatomic) FBCityStreetSearchInputQueryParamsViewerCoordinates *viewerCoordinates; // @synthesize viewerCoordinates=_viewerCoordinates;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

