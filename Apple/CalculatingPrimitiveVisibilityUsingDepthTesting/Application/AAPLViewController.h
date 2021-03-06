/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Header for the cross-platform view controller.
*/

#if defined(TARGET_IOS)
@import UIKit;
#define PlatformViewController UIViewController
#else
@import AppKit;
#define PlatformViewController NSViewController
#endif

@import MetalKit;

#import "AAPLRenderer.h"

@interface AAPLViewController : PlatformViewController

@end
