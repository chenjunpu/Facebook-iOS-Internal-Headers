//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBRichMediaAttachmentsContext : FBExperimentContext
{
    BOOL _useVerve;
    BOOL _animateOpenPrompt;
    BOOL _showGradient;
    BOOL _slideInFromRightFromRichAttachment;
    BOOL _slideInFromRightByDefault;
    unsigned int _photoLoadingLoggingSamplingRate;
    double _visibilityLoggingTimeThreshold;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL slideInFromRightByDefault; // @synthesize slideInFromRightByDefault=_slideInFromRightByDefault;
@property(readonly, nonatomic) BOOL slideInFromRightFromRichAttachment; // @synthesize slideInFromRightFromRichAttachment=_slideInFromRightFromRichAttachment;
@property(readonly, nonatomic) unsigned int photoLoadingLoggingSamplingRate; // @synthesize photoLoadingLoggingSamplingRate=_photoLoadingLoggingSamplingRate;
@property(readonly, nonatomic) BOOL showGradient; // @synthesize showGradient=_showGradient;
@property(readonly, nonatomic) BOOL animateOpenPrompt; // @synthesize animateOpenPrompt=_animateOpenPrompt;
@property(readonly, nonatomic) double visibilityLoggingTimeThreshold; // @synthesize visibilityLoggingTimeThreshold=_visibilityLoggingTimeThreshold;
@property(readonly, nonatomic) BOOL useVerve; // @synthesize useVerve=_useVerve;

@end

