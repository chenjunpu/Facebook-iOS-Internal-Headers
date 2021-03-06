//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBComposerEventDate, FBMLESuggestion, NSString;

@interface FBComposerLifeEventBootStrapInfo : NSObject
{
    FBMLESuggestion *_lifeEvent;
    NSString *_schoolType;
    FBComposerEventDate *_earliestDateAllowed;
    NSString *_employerHubId;
    NSString *_schoolHubId;
}

@property(copy, nonatomic) NSString *schoolHubId; // @synthesize schoolHubId=_schoolHubId;
@property(copy, nonatomic) NSString *employerHubId; // @synthesize employerHubId=_employerHubId;
@property(retain, nonatomic) FBComposerEventDate *earliestDateAllowed; // @synthesize earliestDateAllowed=_earliestDateAllowed;
@property(copy, nonatomic) NSString *schoolType; // @synthesize schoolType=_schoolType;
@property(copy, nonatomic) FBMLESuggestion *lifeEvent; // @synthesize lifeEvent=_lifeEvent;
- (void).cxx_destruct;
- (id)initWithLifeEvent:(id)arg1 schoolType:(id)arg2 earliestDateAllowed:(id)arg3 employerHubId:(id)arg4 schoolHubId:(id)arg5;

@end

