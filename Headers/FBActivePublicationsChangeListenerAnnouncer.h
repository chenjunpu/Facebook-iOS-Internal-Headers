//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBActivePublicationsChangeListener-Protocol.h"

@class NSString;

@interface FBActivePublicationsChangeListenerAnnouncer : FBAnnouncerBase <FBActivePublicationsChangeListener>
{
}

- (void)updatedPublication:(id)arg1;
- (void)removedPublicationWithPublisherData:(id)arg1;
- (void)addedPublicationWithPublisherData:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

