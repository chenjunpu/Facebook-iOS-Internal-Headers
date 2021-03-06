//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerAudienceEducationProtocol-Protocol.h"
#import "FBComposerNewcomerEducationViewControllerDelegate-Protocol.h"

@class FBComposerAuthor, FBComposerNewcomerEducationViewController, FBMemAudienceInfo, FBTypedNSArrayOfFBComposerPrivacySetting, FBUserSession, NSString;
@protocol FBComposerAudienceEducationProtocolDelegate;

@interface FBEducationNewcomerAudience : NSObject <FBComposerNewcomerEducationViewControllerDelegate, FBComposerAudienceEducationProtocol>
{
    FBUserSession *_session;
    FBMemAudienceInfo *_audienceInfo;
    FBComposerAuthor *_author;
    FBTypedNSArrayOfFBComposerPrivacySetting *_availablePrivacySettings;
    FBComposerNewcomerEducationViewController *_newcomerEducationViewController;
    id <FBComposerAudienceEducationProtocolDelegate> _delegate;
    unsigned int _platform;
}

@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) __weak id <FBComposerAudienceEducationProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)newcomerEducationViewControllerUserDidSelectHelpCenterLink:(id)arg1;
- (void)newcomerEducationViewControllerUserDidTapBackgroundOfView:(id)arg1;
- (void)newcomerEducationViewControllerUserDidSelectLearnMore:(id)arg1;
- (void)newcomerEducationViewControllerUserDidSelectMoreOptions:(id)arg1;
- (void)newcomerEducationViewController:(id)arg1 userDidSelectActionWithPrivacy:(id)arg2;
- (void)_sendNewcomerAlignmentRequestForEvent:(unsigned int)arg1;
- (id)viewForInterstitialWithFrame:(struct CGRect)arg1;
- (void)sendAudienceEducationRequestForEvent:(unsigned int)arg1;
- (void)didInsertAudienceEducationToView;
- (id)tooltipTextForPrivacySetting:(id)arg1;
- (unsigned int)tooltipType;
- (BOOL)shouldShowTooltip;
- (id)tooltipIdentifier;
- (unsigned int)audienceEducationViewType;
- (id)audienceEducationData;
- (BOOL)showEducationForPrivacySetting:(id)arg1;
- (unsigned int)audienceEducationType;
- (BOOL)_isValidInputParameters;
- (id)initWithSession:(id)arg1 audienceinfo:(id)arg2 forAuthor:(id)arg3 availablePrivacySettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

