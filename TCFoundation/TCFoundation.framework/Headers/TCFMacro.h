//
//  TCFMacro.h
//  TCFoundation
//
//  Created by chenwenhao on 2021/5/28.
//

#ifndef TCFMacro_h
#define TCFMacro_h

#pragma mark ----------------------------- FLAG -----------------------------
#define TC_PURE_VIRTUAL /* 纯虚(子类如果没有重载，要在Interface下标明依旧是纯需) */
#define TC_OVERRIDE     /* 推荐重载的点 */
#define TC_NON_OVERRIDE /* 表示该函数不推荐重载，逻辑已经由父类完备 */

#endif /* TCFMacro_h */
