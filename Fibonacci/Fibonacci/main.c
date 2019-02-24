//
//  main.c
//  Fibonacci
//
//  Created by SULTAN ZEYBEK on 20.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Fibonacci series...\n");
    int f0=0,f1=1;
    printf("%d %d ", f0,f1);
    int f;
    for (int i=0; i<=10; i++) {
        f=f0+f1;
        printf(" %d ",f);
        f0=f1;
        f1=f;
        
    }
    printf("\n");
    return 0;
}
