//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBProfileModelItem, FBProfileToolbox;

@interface FBProfileItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBProfileModelItem *_model;
    FBProfileToolbox *_toolbox;
    SEL _tapAction;
    SEL _tapButtonIconAction;
}

+ (id)newWithModel:(id)arg1 tapAction:(SEL)arg2 tapButtonIconAction:(SEL)arg3 imageSideLength:(float)arg4 shouldShowBadgeCount:(BOOL)arg5 toolbox:(id)arg6;
- (void).cxx_destruct;

@end

