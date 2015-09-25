//
//  PublicWeiboViewModel.h
//  MVVMTest
//
//  Created by admin on 15/9/24.
//  Copyright © 2015年 xukun. All rights reserved.
//

#import "ViewModelClass.h"
#import "PublicModel.h"

@interface PublicWeiboViewModel : ViewModelClass
//获取围脖列表
-(void) fetchPublicWeiBo;

//跳转到微博详情页
-(void) weiboDetailWithPublicModel: (PublicModel *) publicModel WithViewController: (UIViewController *)superController;
@end
