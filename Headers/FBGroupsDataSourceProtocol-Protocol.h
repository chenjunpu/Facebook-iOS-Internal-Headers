//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBUserSession;
@protocol FBGroupsDataSourceDelegate, FBGroupsTableViewControllerProtocol, FBTableViewMutating;

@protocol FBGroupsDataSourceProtocol
@property(nonatomic) __weak id <FBGroupsTableViewControllerProtocol> actionsTarget;
@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator;
@property(nonatomic) __weak id <FBGroupsDataSourceDelegate> delegate;
@property(readonly, nonatomic) FBUserSession *session;
- (void)cancelRequests;
- (void)downloadData:(int)arg1;
- (BOOL)canDownloadTail;
- (BOOL)isDownloadingData;
- (unsigned int)count;
- (BOOL)hasData;
- (BOOL)supportsDownloadType:(int)arg1;
- (id)initWithSession:(FBUserSession *)arg1;

@optional
- (BOOL)isDownloadingData:(int)arg1;
@end

