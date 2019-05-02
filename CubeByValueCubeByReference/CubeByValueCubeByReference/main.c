//
//  main.c
//  CubeByValueCubeByReference
//
//  Created by SULTAN ZEYBEK on 2.05.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
int cubeByValue(int n);
void cubeByReference(int *nPtr);

int main(int argc, const char * argv[]) {
    int number = 5;
    printf("The original value of number is %d\n",number);
    
    number = cubeByValue(number);
    printf("The new value of number is %d\n", number);
    
    number = 5;
    cubeByReference(&number);
    printf("The new value of number is %d\n", number);
    
    return 0;
}

int cubeByValue(int n){
    
    return n * n * n;
}

void cubeByReference(int *nPtr){
    
    *nPtr = *nPtr * *nPtr * *nPtr;
}
