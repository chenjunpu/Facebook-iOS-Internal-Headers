//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPointAnnotation.h>

#import "MKAnnotation-Protocol.h"

@class NSString;

@interface RCTPointAnnotation : MKPointAnnotation <MKAnnotation>
{
    BOOL _hasLeftCallout;
    BOOL _hasRightCallout;
    BOOL _animateDrop;
    NSString *_identifier;
}

@property(nonatomic) BOOL animateDrop; // @synthesize animateDrop=_animateDrop;
@property(nonatomic) BOOL hasRightCallout; // @synthesize hasRightCallout=_hasRightCallout;
@property(nonatomic) BOOL hasLeftCallout; // @synthesize hasLeftCallout=_hasLeftCallout;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

