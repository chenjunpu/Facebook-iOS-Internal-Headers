//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSearchSuggestionProtocol-Protocol.h"

@class NSString;

@interface FBSearchCityGuideSuggestion : NSObject <FBSearchSuggestionProtocol>
{
    BOOL _isNonCacheable;
    BOOL _isTextRightToLeft;
    unsigned int _cacheType;
    NSString *_text;
    NSString *_semantic;
    unsigned int _resultType;
    NSString *_fbid;
    NSString *_entityType;
    NSString *_category;
    NSString *_subtext;
}

@property(readonly, nonatomic) BOOL isTextRightToLeft; // @synthesize isTextRightToLeft=_isTextRightToLeft;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
@property(readonly, copy, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL isNonCacheable; // @synthesize isNonCacheable=_isNonCacheable;
@property(nonatomic) unsigned int cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
- (id)graphQLTypeName;
- (id)suggestionTypeForLogging;
- (id)initWithText:(id)arg1 fbid:(id)arg2 entityType:(id)arg3 category:(id)arg4 subtext:(id)arg5 isTextRightToLeft:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

