//
//  SFDefaultTab.h
//  tabtest
//
//  Created by Matteo Rattotti on 2/28/10.
//  Copyright 2010 www.shinyfrog.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#import "SFTabView.h"



@interface SFLabelLayer : CATextLayer
@end



@interface SFCloseLayer : CALayer
@end



@interface SFDefaultTab : CALayer
{
    id _representedObject;

    NSImage *_activeTab;
    NSImage *_inactiveTab;

    // Close layer
    SFCloseLayer *_closeLayer;
    NSImage *_activeClose;
    NSImage *_activeCloseHighlight;
}

@property (nonatomic, assign) BOOL closeLayerHovered;

- (void)mousemove:(NSPoint)point;
- (void)setRepresentedObject:(id)representedObject;
- (void)setSelected:(BOOL)selected;

@end
