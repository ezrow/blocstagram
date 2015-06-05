//
//  BLCComment.h
//  Blocstagram
//
//  Created by Ryan Williams on 05/06/15.
//  Copyright (c) 2015 Ryan Williams. All rights reserved.
//



#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;



@end
    