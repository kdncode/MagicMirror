//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyleRenderer.h"

@interface MSStyleTextRenderer : MSStyleRenderer
{
}

+ (void)drawTextLayoutManager:(id)arg1 style:(id)arg2 atPoint:(struct CGPoint)arg3 inFrame:(struct CGRect)arg4 context:(id)arg5;
- (struct CGRect)boundingRectForDrawingTextInOriginalRect;
- (void)drawBorderForLayoutManager:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawLayoutManager:(id)arg1 style:(id)arg2 aPoint:(struct CGPoint)arg3;
- (struct CGPoint)originForDrawingLayoutManager:(id)arg1;
- (void)renderWithLayoutManager:(id)arg1 atPoint:(struct CGPoint)arg2;

@end
