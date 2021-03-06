//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"

@class NSString;

@interface FBComponentTableViewDataSourceSelectionEventListenerAnnouncer : FBAnnouncerBase <FBComponentTableViewDataSourceSelectionEventListener>
{
}

- (void)dataSource:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

