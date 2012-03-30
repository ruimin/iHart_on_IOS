//
//  FaceDetectAppDelegate.h
//  FaceDetect
//
//

#import <UIKit/UIKit.h>

@class FaceDetectViewController;

@interface FaceDetectAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FaceDetectViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet FaceDetectViewController *viewController;

@end

