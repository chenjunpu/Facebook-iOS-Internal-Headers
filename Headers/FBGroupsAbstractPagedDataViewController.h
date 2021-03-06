//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGroupsTableViewController.h"

#import "FBGroupsDataSourceDelegate-Protocol.h"

@class FBGroupsSpinnerTableFooterView, FBTransientViewStateManager, NSString, UIView;
@protocol FBGroupsDataSourceProtocol><UITableViewDelegate, FBIntentHandler;

@interface FBGroupsAbstractPagedDataViewController : FBGroupsTableViewController <FBGroupsDataSourceDelegate>
{
    BOOL _enableTransientViewState;
    BOOL _hideSpinnerOnViewLoad;
    BOOL _enableEmptyTransientViewState;
    id <FBGroupsDataSourceProtocol><UITableViewDelegate> _dataSource;
    FBGroupsSpinnerTableFooterView *_spinnerFooterView;
    UIView *_endOfDataFooterView;
    FBTransientViewStateManager *_viewStateManager;
}

@property(retain, nonatomic) FBTransientViewStateManager *viewStateManager; // @synthesize viewStateManager=_viewStateManager;
@property(retain, nonatomic) UIView *endOfDataFooterView; // @synthesize endOfDataFooterView=_endOfDataFooterView;
@property(retain, nonatomic) FBGroupsSpinnerTableFooterView *spinnerFooterView; // @synthesize spinnerFooterView=_spinnerFooterView;
@property(nonatomic) BOOL enableEmptyTransientViewState; // @synthesize enableEmptyTransientViewState=_enableEmptyTransientViewState;
@property(nonatomic) BOOL hideSpinnerOnViewLoad; // @synthesize hideSpinnerOnViewLoad=_hideSpinnerOnViewLoad;
@property(retain, nonatomic) id <FBGroupsDataSourceProtocol><UITableViewDelegate> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_setFooterLoading:(BOOL)arg1 endOfData:(BOOL)arg2;
- (id)analyticsModule;
- (id)analyticsEvent;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didEndDownloadForType:(int)arg2 newDataStartingIndexPath:(id)arg3 error:(id)arg4;
- (void)dataSource:(id)arg1 didStartDownloadForType:(int)arg2;
- (void)dataSource:(id)arg1 didEndDownloadForType:(int)arg2 error:(id)arg3;
- (BOOL)viewIsVisible;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 enableTransientViewState:(BOOL)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @dynamic intentHandler;
@property(readonly) Class superclass;

@end

