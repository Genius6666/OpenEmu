//
//  OEGridCell.h
//  OpenEmu
//
//  Created by Daniel Nagel on 31.08.13.
//
//

#import <ImageKit/ImageKit.h>
#import "OEGridView.h"
#import "OEGridCell.h"

extern NSString *const OECoverGridViewGlossDisabledKey;
@interface OEGridGameCell : OEGridCell
+ (NSImage *)missingArtworkImageWithSize:(NSSize)size;
- (NSImage *)missingArtworkImageWithSize:(NSSize)size;

- (NSRect)ratingFrame;
@end
