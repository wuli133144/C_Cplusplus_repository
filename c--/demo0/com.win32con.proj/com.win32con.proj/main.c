//
//  main.c
//  E001UsingString
//
//  Created by plter on 14-5-19.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>
#include "Stringclass.h"

int main(int argc, const char * argv[])
{

//    logOn();
    
    Stringobject * str = createwithstring("Hello World");
    
    // insert code here...
    printf("%s\n",str->getCString(str));
    
    //str->release(str);
	str->release(str);
	getchar();
	return 0;
}

