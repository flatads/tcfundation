//
//  TCUtil.h
//  TCUtil
//
//  Created by EkoHu on 2021/3/11.
//

#import <Foundation/Foundation.h>

//! Project version number for TCUtil.
FOUNDATION_EXPORT double TCUtilVersionNumber;

//! Project version string for TCUtil.
FOUNDATION_EXPORT const unsigned char TCUtilVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TCUtil/PublicHeader.h>

// define
#import "TCUtilMacro.h"

// base extension
#import "NSObject+TCBaseExt.h"
#import "NSString+TCBaseExt.h"
#import "NSRegularExpression+TCBaseExt.h"
#import "NSNumber+TCBaseExt.h"
#import "NSObject+TCSelector.h"
#import "NSObject+TCSwizzle.h"

// container
#import "TCWeakMutableArray.h"
#import "TCWeakMutableDictionary.h"
#import "TCWeakMutableSet.h"

#import "NSSet+TCContainer.h"

#import "NSArray+TCContainer.h"
#import "NSMutableArray+TCContainer.h"

#import "NSDictionary+TCContainer.h"
#import "NSMutableDictionary+TCContainer.h"

//white list
#import "TCBlackWhiteList.h"

// debug
#import "TCDebugUtil.h"
#import "TCDebugTime.h"

// error
#import "NSError+TCUtil.h"

// file
#import "TCFileUtil.h"
#import "TCFileUtil+Path.h"
#import "NSFileManager+TCGenerator.h"

// math
#import "TCMathUtil.h"

// network
#import "TCNetworkUtil.h"
#import "TCRequestHelper.h"
#import "NSString+TCNetworkUtil.h"

// runtime
#import "TCRuntimeUtil.h"

// json
#import "NSObject+TCJSONUtil.h"

// crypto
#import "TCDesUtil.h"
#import "TCMD5Util.h"
#import "TCRSAUtil.h"
#import "TCPEMUtil.h"

// sqlite
#import "TCSqliteUtil.h"

// graphic
#import "TCGraphicUtil.h"
#import "TCGraphicUtil+Coordinate.h"
#import "TCCoordinationFunctions.h"

// keychain
#import "TCKeychainItemWrapper.h"

// version
#import "TCVersionComparation.h"

// timer
#import "TCWeakTimer.h"

// delegate
#import "TCWeakDelegate.h"

// system
#import "TCSystemUtil.h"
#import "TCSystemUtil+Device.h"
