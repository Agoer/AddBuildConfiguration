//
//  AppDefine.h
//  BuildConfiguration
//
//  Created by chanli on 15/11/30.
//  Copyright © 2015年 aotumanlady Inc. All rights reserved.
//

#ifndef AppDefine_h
#define AppDefine_h

#ifdef TESTDEBUG
#define kHTTPAPIHost @"http://www.automan.com/test"
#elif DEBUG
#define kHTTPAPIHost @"http://www.automan.com/debug"
#elif BETA
#define kHTTPAPIHost @"http://www.automan.com"
#else
#define kHTTPAPIHost @"http://www.automan.com"
#endif

#endif /* AppDefine_h */
