//
//  BDJPostPictureBrowseViewController.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/25.
//  Copyright © 2016年 yizzuide. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XFComponentRoutable.h"

@interface BDJPostPictureBrowseViewController : UIViewController <XFComponentRoutable>

@property (nonatomic, copy) NSDictionary *URLParams;
@property (nonatomic, copy) id componentData;
@end
