//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBComposerAudienceEducationData : FBValueObject <NSCopying>
{
    NSString *_title;
    NSString *_introductionText;
    NSString *_callToActionText;
    NSString *_primaryActionText;
    NSString *_additionalActionText;
    NSString *_publicTooltip;
    NSString *_friendsTooltip;
    NSString *_onlyMeTooltip;
    NSString *_moreTooltip;
    NSString *_dismissTooltip;
    NSString *_suggestedTooltip;
    NSString *_learnMoreTitle;
    NSArray *_learnMoreParagraphs;
}

@property(readonly, copy, nonatomic) NSArray *learnMoreParagraphs; // @synthesize learnMoreParagraphs=_learnMoreParagraphs;
@property(readonly, copy, nonatomic) NSString *learnMoreTitle; // @synthesize learnMoreTitle=_learnMoreTitle;
@property(readonly, copy, nonatomic) NSString *suggestedTooltip; // @synthesize suggestedTooltip=_suggestedTooltip;
@property(readonly, copy, nonatomic) NSString *dismissTooltip; // @synthesize dismissTooltip=_dismissTooltip;
@property(readonly, copy, nonatomic) NSString *moreTooltip; // @synthesize moreTooltip=_moreTooltip;
@property(readonly, copy, nonatomic) NSString *onlyMeTooltip; // @synthesize onlyMeTooltip=_onlyMeTooltip;
@property(readonly, copy, nonatomic) NSString *friendsTooltip; // @synthesize friendsTooltip=_friendsTooltip;
@property(readonly, copy, nonatomic) NSString *publicTooltip; // @synthesize publicTooltip=_publicTooltip;
@property(readonly, copy, nonatomic) NSString *additionalActionText; // @synthesize additionalActionText=_additionalActionText;
@property(readonly, copy, nonatomic) NSString *primaryActionText; // @synthesize primaryActionText=_primaryActionText;
@property(readonly, copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(readonly, copy, nonatomic) NSString *introductionText; // @synthesize introductionText=_introductionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 introductionText:(id)arg2 callToActionText:(id)arg3 primaryActionText:(id)arg4 additionalActionText:(id)arg5 publicTooltip:(id)arg6 friendsTooltip:(id)arg7 onlyMeTooltip:(id)arg8 moreTooltip:(id)arg9 dismissTooltip:(id)arg10 suggestedTooltip:(id)arg11 learnMoreTitle:(id)arg12 learnMoreParagraphs:(id)arg13;

@end

