//
//  FaceDetectViewController.h
//  FaceDetect
//

#import <UIKit/UIKit.h>

@interface FaceDetectViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	IBOutlet UIImageView *imageView;
	IBOutlet UIBarButtonItem *cameraButton;
	UIImagePickerController *pickerController;

}

- (IBAction)getImageFromCamera:(id) sender;
- (IBAction)getImageFromPhotoAlbum:(id) sender;
- (IBAction)faceDetect:(id) sender;
- (IBAction)edgeDetect:(id) sender;
@end

