//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

@interface MSDragRectEventHandler : MSEventHandler
{
    BOOL _handToolActive;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

- (void)absoluteDrawInRect:(struct CGRect)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (id)currentGroup;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawRectPreview;
- (void)flagsChanged:(id)arg1;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
@property(nonatomic) BOOL handToolActive; // @synthesize handToolActive=_handToolActive;
- (void)handlerGotFocus;
- (void)handlerWillLoseFocus;
- (BOOL)handlesHandToolItself;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (id)layerSnapper;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)performActionWithRect:(struct CGRect)arg1;
- (void)prepareGraphicsContext;
- (struct CGRect)rectForInserting;
- (void)refresh;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
- (BOOL)shouldDrawLayerSelection;
- (BOOL)shouldHideExportBar;

@end

