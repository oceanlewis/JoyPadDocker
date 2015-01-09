//
//  KeyCodeDictionary.h
//  JoyPadDocker
//
//  Created by David Lewis on 1/9/15.
//  Copyright (c) 2015 David Lewis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyCodeDictionary : NSObject
- (CGKeyCode)keyFromString:(NSString *)keyName;
- (NSString *)stringFromKeyCode:(CGKeyCode)keyCode;
@end
