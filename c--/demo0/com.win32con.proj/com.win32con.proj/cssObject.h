//
//  cssObject.h
//  CSubSub
//
//  Created by plter on 14-5-20.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#ifndef __CSubSub__cssObject__
#define __CSubSub__cssObject__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void logOff();
void logOn();
void logOut(char * msg);

#define cssClass(name) typedef struct name{name##Fields(struct name *)}name;
//myclass{#myclasss(struct name *)
//
//
#define cssAs(type,object) ((type)(object))
#define cssAlloc(__class__) cssAs(__class__ *,malloc(sizeof(__class__)))
#define cssDelloc(object) free(object)


//TYPE is type of the class that you wanna to create
#define cssObjectFields(TYPE) \
    int _retainCount;\
    void (*retain)(TYPE _this);\
    void (*release)(TYPE _this);\
    int (*retainCount)(TYPE _this);\
    void (*onDelloc)(TYPE _this);

cssClass(cssObject)
	//cssObject.cssObjectFields()

cssObject* cssObjectInit(cssObject *_this);
    
#ifdef __cplusplus
}
#endif

#endif /* defined(__CSubSub__cssObject__) */
