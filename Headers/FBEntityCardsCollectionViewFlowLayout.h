//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface FBEntityCardsCollectionViewFlowLayout : UICollectionViewLayout
{
    float _cardInterimSpacing;
    struct CGSize _cardSize;
    struct UIEdgeInsets _cardInset;
}

@property(nonatomic) struct CGSize cardSize; // @synthesize cardSize=_cardSize;
@property(nonatomic) struct UIEdgeInsets cardInset; // @synthesize cardInset=_cardInset;
@property(nonatomic) float cardInterimSpacing; // @synthesize cardInterimSpacing=_cardInterimSpacing;
- (int)_sectionForCardIndex:(unsigned int)arg1 sectionRanges:(id)arg2;
- (id)_sectionRanges;
- (unsigned int)_totalCardCount;
- (struct CGPoint)_snapToContentSizeWithOffset:(struct CGPoint)arg1;
- (struct CGRect)proposedFrameForSelectedCard;
- (struct CGPoint)snapToPageWithProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedCardAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (unsigned int)_cardIndexForIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;

@end

