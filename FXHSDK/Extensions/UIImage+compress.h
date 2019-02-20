//
//  UIImage+compress.h
//  Chengqu
//
//  Created by wangyang on 2018/9/29.
//  Copyright © 2018 HangzhouHaiqu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (compress)

- (NSData *)compressWithMaxLength:(NSUInteger)maxLength;

@end

NS_ASSUME_NONNULL_END
