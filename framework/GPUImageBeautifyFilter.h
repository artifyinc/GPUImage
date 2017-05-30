//
//  GPUImageBeautifyFilter.h
//  BeautifyFaceDemo
//
//  Created by guikz on 16/4/28.
//  Copyright © 2016年 guikz. All rights reserved.
//

//#import <GPUImage/GPUImage.h>
//#import "GPUImageFilter.h"
#import "GPUImageFilterGroup.h"
//#import "GPUImageBilateralFilter.h"
//#import "GPUImageCannyEdgeDetectionFilter.h"
//#import "GPUImageHSBFilter.h"
@class GPUImageBilateralFilter;
@class GPUImageCannyEdgeDetectionFilter;
@class GPUImageHSBFilter;

@class GPUImageCombinationFilter;

@interface GPUImageBeautifyFilter : GPUImageFilterGroup {
    GPUImageBilateralFilter *bilateralFilter;
    GPUImageCannyEdgeDetectionFilter *cannyEdgeFilter;
    GPUImageCombinationFilter *combinationFilter;
    GPUImageHSBFilter *hsbFilter;
}

@end
