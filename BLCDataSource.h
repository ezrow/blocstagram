//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Ryan Williams on 05/06/15.
//  Copyright (c) 2015 Ryan Williams. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BLCMedia;

@interface BLCDataSource : NSObject

+ (instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(BLCMedia *)item;

- (void) deleteMediaItemAtIndex:(NSInteger) index;


@end
