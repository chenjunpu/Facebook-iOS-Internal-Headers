//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMessengerChatBarMegaphoneController-Protocol.h"
#import "FBMessengerChatBatQuickPromotionTableViewCellDelegate-Protocol.h"
#import "FBSessionClassProvidable-Protocol.h"

@class FBMessengerChatBarViewController, FBMessengerChatBatQuickPromotionTableViewCell, FBQPPromotion, FBQuickPromotionCoordinator, FBUserSession, NSString;

@interface FBMessengerChatBarQuickPromotionManager : NSObject <FBMessengerChatBarMegaphoneController, FBMessengerChatBatQuickPromotionTableViewCellDelegate, FBSessionClassProvidable>
{
    FBMessengerChatBarViewController *_chatBarViewController;
    FBMessengerChatBatQuickPromotionTableViewCell *_chatBarMegaphoneCell;
    FBUserSession *_session;
    FBQPPromotion *_currentPromotion;
}

+ (id)sharedManager;
@property(retain, nonatomic) FBQPPromotion *currentPromotion; // @synthesize currentPromotion=_currentPromotion;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBMessengerChatBatQuickPromotionTableViewCell *chatBarMegaphoneCell; // @synthesize chatBarMegaphoneCell=_chatBarMegaphoneCell;
@property(retain, nonatomic) FBMessengerChatBarViewController *chatBarViewController; // @synthesize chatBarViewController=_chatBarViewController;
- (void).cxx_destruct;
- (id)megaphoneCellInTableView:(id)arg1;
- (float)heightForMegaphoneCellInTableView:(id)arg1;
- (BOOL)shouldDisplayMegaphone;
- (void)prepareMegaphone;
- (void)didPressDismissButton:(id)arg1;
- (void)didPressPrimaryButton:(id)arg1;
- (void)_removePromotionAndReloadMegaphone;
- (void)stopSession;
- (void)configureWithChatBarViewController:(id)arg1;
@property(readonly, nonatomic) FBQuickPromotionCoordinator *quickPromotionCoordinator;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

