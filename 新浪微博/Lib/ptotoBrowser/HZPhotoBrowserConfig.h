//
//  HZPhotoBrowserConfig.h
//  HZPhotoBrowser
//
//  Created by aier on 15-2-9.
//  Copyright (c) 2015年 GHZ. All rights reserved.
//

#define kMinZoomScale 0.6f
#define kMaxZoomScale 2.0f

#define kIsFullWidthForLandScape YES //是否在横屏的时候直接满宽度，而不是满高度，一般是在有长图需求的时候设置为YES

//是否支持横屏
#define shouldLandscape YES

// 图片保存成功提示文字
#define HZPhotoBrowserSaveImageSuccessText @" 保存成功 ";

// 图片保存失败提示文字
#define HZPhotoBrowserSaveImageFailText @" 保存失败 ";

// browser中图片间的margin
#define HZPhotoBrowserImageViewMargin 10

// browser中显示图片动画时长
#define HZPhotoBrowserShowImageAnimationDuration 0.35f

// browser中隐藏图片动画时长
#define HZPhotoBrowserHideImageAnimationDuration 0.35f

// 图片下载进度指示进度显示样式（HZWaitingViewModeLoopDiagram 环形，HZWaitingViewModePieDiagram 饼型）
#define HZWaitingViewProgressMode HZWaitingViewModePieDiagram

//#define HZWaitingViewBackgroundColor [UIColor clearColor]

// 图片下载进度指示器内部控件间的间距
#define HZWaitingViewItemMargin 5

