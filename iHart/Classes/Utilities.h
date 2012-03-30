//
//  Utilities.h
//  FaceDetect
//
//  
#import <Foundation/Foundation.h>
#import "opencv/cv.h"

@interface Utilities : NSObject {

}

// Utility Methods
+ (IplImage *)CreateIplImageFromUIImage:(UIImage *)image;
+ (UIImage *)UIImageFromIplImage:(IplImage *)image;
+ (UIImage *)scaleAndRotateImage:(UIImage *)image;

// Face Detection Methods
+ (UIImage *) opencvFaceDetect:(UIImage *)originalImage;
+ (UIImage *) opencvEdgeDetect:(UIImage *)originalImage;

@end
