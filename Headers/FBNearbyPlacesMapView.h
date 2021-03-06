//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBDrawnShapeView, FBNearbyPlacesMapLoadingView, MKMapView, UIButton, UICollectionView;

@interface FBNearbyPlacesMapView : UIView
{
    FBNearbyPlacesMapLoadingView *_mapLoadingView;
    FBDrawnShapeView *_locationArrowView;
    MKMapView *_mapView;
    UICollectionView *_collectionView;
    UIButton *_currentLocationButton;
    UIButton *_searchThisAreaButton;
}

@property(readonly, nonatomic) UIButton *searchThisAreaButton; // @synthesize searchThisAreaButton=_searchThisAreaButton;
@property(readonly, nonatomic) UIButton *currentLocationButton; // @synthesize currentLocationButton=_currentLocationButton;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)setSearchThisAreaButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

