//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerAudienceCustomIndividualsDataSourceDelegate-Protocol.h"
#import "FBComposerAudienceCustomPrivacyDataSourceDelegate-Protocol.h"
#import "FBTokenizerContainingDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBComposerAudienceCustomMemDataSource, FBComposerAudienceCustomView, FBComposerPrivacySetting, FBMutableTaggableCollection, FBPrivacyTokenableOption, FBUserSession, NSMutableDictionary, NSString, UITableView;
@protocol FBComposerCustomAudienceConfigDelegate, FBComposerCustomAudienceViewControllerDelegate;

@interface FBComposerCustomAudienceViewController : UIViewController <UITableViewDelegate, FBTokenizerContainingDelegate, FBComposerAudienceCustomIndividualsDataSourceDelegate, FBComposerAudienceCustomPrivacyDataSourceDelegate>
{
    FBComposerAudienceCustomView *_customAudienceView;
    UITableView *_tableView;
    FBComposerAudienceCustomMemDataSource *_datasource;
    NSMutableDictionary *_selectedIndividuals;
    NSMutableDictionary *_selectedLists;
    NSMutableDictionary *_mapSelectedIDsToNames;
    BOOL _hasFinishedLoading;
    FBComposerPrivacySetting *_seedPrivacySetting;
    FBUserSession *_session;
    FBPrivacyTokenableOption *_primaryTokenizerViewAudienceOption;
    FBMutableTaggableCollection *_taggableCollection;
    id <FBComposerCustomAudienceViewControllerDelegate> _delegate;
    id <FBComposerCustomAudienceConfigDelegate> _configDelegate;
}

@property(nonatomic) __weak id <FBComposerCustomAudienceConfigDelegate> configDelegate; // @synthesize configDelegate=_configDelegate;
@property(nonatomic) __weak id <FBComposerCustomAudienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)fb_showNavigationJewels;
- (id)analyticsModule;
- (void)didDeselectPrivacyTokenableOption:(id)arg1;
- (void)didSelectPrivacyTokenableOption:(id)arg1;
- (id)selectedListForGraphQLID:(id)arg1;
- (id)tintForCurrentController;
- (void)_handleUnselectionOfOption:(id)arg1;
- (void)_handleSelectionOfOption:(id)arg1;
- (id)selectedPersonForGraphQLID:(id)arg1;
- (void)_handleExistingIDs;
- (void)audienceCustomDataSourceDidFetch;
- (id)checkedImageForCell;
- (id)defaultImageForCell;
- (void)nonInteractiveAudienceViewWasTapped;
- (void)accessoryViewWasTappedForTokenizer:(id)arg1;
- (void)textField:(id)arg1 userWillDeleteObjectByTyping:(id)arg2;
- (void)_updatePrimaryTokenizerViewWithPrivacySetting:(id)arg1;
- (void)_updatePrivacySettingDescriptionFromCurrentSelection;
- (void)textField:(id)arg1 searchTextChanged:(id)arg2;
- (void)tokenizer:(id)arg1 willChangeHeight:(float)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)_privacySettingForCurrentAudienceSelection;
- (id)_descriptionForCurrentAudienceSelection;
- (id)_tintForCurrentController;
- (void)_didTapDoneButton;
- (void)_didTapCancelButton;
- (void)configureCustomAudienceControllerWithTokenableOption:(id)arg1 availablePrivacySettings:(id)arg2 tagExpansionStyle:(int)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateTaggedUsers:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

