//
//  MagicMirror.h
//  MagicMirror
//
//  Created by James Tang on 7/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for MagicMirror.
FOUNDATION_EXPORT double MagicMirrorVersionNumber;

//! Project version string for MagicMirror.
FOUNDATION_EXPORT const unsigned char MagicMirrorVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MagicMirror/PublicHeader.h>

#define MMLog(fmt, ...) NSLog((@"MagicMirror: %s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#import "ImageRenderer.h"
@protocol COScript;
@protocol MSLayer;
@protocol MSArtboardGroup;
@protocol MSShapeGroup;
@class MMLayerProperties;
@class SketchPluginContext;


@interface MagicMirror : NSObject

- (id)initWithContext:(SketchPluginContext *)context;

- (void)log;
- (void)showWindow;
- (void)keepAround;
- (void)goAway;

- (void)mirrorPage;
- (NSArray *)artboards;
- (NSDictionary *)artboardsLookup;
- (NSArray *)selectedLayers;
- (void)licenseInfo;

- (void)mirrorPageScale:(NSUInteger)scale
             colorSpace:(ImageRendererColorSpaceIdentifier)colorSpaceIdentifier
            perspective:(BOOL)perspective;

- (void)configureSelection;

@end


@interface MagicMirror (MSShapeGroup)

- (void)setProperties:(MMLayerProperties *)properties forLayer:(id<MSShapeGroup>)layer;
- (MMLayerProperties *)layerPropertiesForLayer:(id <MSShapeGroup>)layer;

@end