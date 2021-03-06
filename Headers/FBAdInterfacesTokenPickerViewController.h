//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdInterfacesTokenFetcherDelegate-Protocol.h"
#import "FBEntityPickerTextFieldDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBAdInterfacesTokenFetcher, FBAvatarPickerView, FBUserSession, NSArray, NSString, UILabel, UITableView;
@protocol FBAdInterfacesTokenParser, FBAdInterfacesTokenPickerViewControllerDelegate;

@interface FBAdInterfacesTokenPickerViewController : UIViewController <FBEntityPickerTextFieldDelegate, FBAdInterfacesTokenFetcherDelegate, UITableViewDataSource, UITableViewDelegate>
{
    FBUserSession *_session;
    NSArray *_currentResults;
    FBAdInterfacesTokenFetcher *_tokensFetcher;
    FBAvatarPickerView *_audiencePickerView;
    id <FBAdInterfacesTokenParser> _parser;
    NSArray *_initialTargetTokens;
    UITableView *_tableView;
    UILabel *_noResultsLabel;
    struct UIEdgeInsets _thumbnailInsets;
    id <FBAdInterfacesTokenPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAdInterfacesTokenPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_selectedResults;
- (id)_resultAtIndexPath:(id)arg1;
- (BOOL)isLocation:(id)arg1 containedInLocation:(id)arg2;
- (void)_addSelectedToken:(id)arg1;
- (id)_resultsFilter;
- (void)addTokenAndUpdate:(id)arg1;
- (id)_tokensCollidingWithResult:(id)arg1;
- (void)_didTapDone;
- (void)_didTapCancel;
- (void)tokenFetcher:(id)arg1 didFinishWithError:(id)arg2;
- (void)tokenFetcher:(id)arg1 didFetchResults:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldHeightDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textField:(id)arg1 searchTextChanged:(id)arg2;
- (void)textField:(id)arg1 userWillDeleteObjectByTyping:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)showNoTokensSelectedWarning;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 targetTokens:(id)arg2 parser:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

