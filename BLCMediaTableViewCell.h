    //
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by Ryan Williams on 06/06/15.
//  Copyright (c) 2015 Ryan Williams. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;
+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
