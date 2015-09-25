//
//  PublicCell.h
//  MVVMTest
//
//  Created by admin on 15/9/24.
//  Copyright © 2015年 xukun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PublicModel.h"

@interface PublicCell : UITableViewCell

-(void) setValueWithDic : (PublicModel *) publicModel;

@end
