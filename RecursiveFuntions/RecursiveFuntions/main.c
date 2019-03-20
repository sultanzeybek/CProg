//
//  main.c
//  RecursiveFuntions
//
//  Created by SULTAN ZEYBEK on 20.03.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int f(int x){
    if(x<=1)
        return 1;
    return x*f(x-1);
}

void foo(int a , int b){
    if( a==0 | b == 0 ){
        return;
    }
    foo(a-1, b-1);
    printf("%d %d \n", a,b);
    foo(a-1, b-1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    foo(5,8);
    return 0;
}
