//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBRichTextWithEntitiesComponent, FBUFICommentBodyComponentState;

@interface FBUFICommentBodyComponent : CKCompositeComponent
{
    FBUFICommentBodyComponentState *_state;
    FBRichTextWithEntitiesComponent *_messageTextComponent;
}

+ (id)newWithCommentData:(id)arg1 style:(struct FBUFICommentBodyComponenStyle)arg2 toolbox:(id)arg3;
+ (id)initialState;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (void)didTapTruncationString:(id)arg1;

@end

