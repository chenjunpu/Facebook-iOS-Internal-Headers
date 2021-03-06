//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FBQPPromotion, NSString, UISwitch, UITextField, UITextView;

@interface FBNuxQPEditCreativeViewController : UITableViewController <UITextFieldDelegate, UITextViewDelegate>
{
    FBQPPromotion *_promotion;
    UITextField *_titleTextField;
    UITextView *_contentTextView;
    UITextView *_socialContextTextView;
    UITextField *_primaryButtonTitleTextField;
    UITextField *_secondaryButtonTitleTextField;
    UITextField *_primaryButtonActionURLTextField;
    UITextField *_secondaryButtonActionURLTextField;
    UISwitch *_primaryButtonDismissPromotionSwitch;
    UISwitch *_secondaryButtonDismissPromotionSwitch;
    UISwitch *_dismissButtonDismissPromotionSwitch;
}

@property(retain, nonatomic) UISwitch *dismissButtonDismissPromotionSwitch; // @synthesize dismissButtonDismissPromotionSwitch=_dismissButtonDismissPromotionSwitch;
@property(retain, nonatomic) UISwitch *secondaryButtonDismissPromotionSwitch; // @synthesize secondaryButtonDismissPromotionSwitch=_secondaryButtonDismissPromotionSwitch;
@property(retain, nonatomic) UISwitch *primaryButtonDismissPromotionSwitch; // @synthesize primaryButtonDismissPromotionSwitch=_primaryButtonDismissPromotionSwitch;
@property(retain, nonatomic) UITextField *secondaryButtonActionURLTextField; // @synthesize secondaryButtonActionURLTextField=_secondaryButtonActionURLTextField;
@property(retain, nonatomic) UITextField *primaryButtonActionURLTextField; // @synthesize primaryButtonActionURLTextField=_primaryButtonActionURLTextField;
@property(retain, nonatomic) UITextField *secondaryButtonTitleTextField; // @synthesize secondaryButtonTitleTextField=_secondaryButtonTitleTextField;
@property(retain, nonatomic) UITextField *primaryButtonTitleTextField; // @synthesize primaryButtonTitleTextField=_primaryButtonTitleTextField;
@property(retain, nonatomic) UITextView *socialContextTextView; // @synthesize socialContextTextView=_socialContextTextView;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) FBQPPromotion *promotion; // @synthesize promotion=_promotion;
- (void).cxx_destruct;
- (id)_createDismissAction;
- (void)_configureTextField:(id)arg1 forString:(id)arg2;
- (void)_handleSwitchValueChanged:(id)arg1;
- (void)_saveSecondaryButtonActionURL;
- (void)_savePrimaryButtonActionURL;
- (void)_saveSecondaryButtonTitle;
- (void)_savePrimaryButtonTitle;
- (void)_saveSocialContext;
- (void)_saveContent;
- (void)_saveTitle;
- (void)_saveAllChanges;
- (void)_handleTapGesture;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)fb_showNavigationJewels;
- (id)_dismissButtonCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_buttonCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_socialContextCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_contentCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_titleCellForTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPromotion:(id)arg1;
- (id)init;
- (void)dealloc;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

