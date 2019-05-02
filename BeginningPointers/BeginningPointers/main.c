//
//  main.c
//  BeginningPointers
//
//  Created by SULTAN ZEYBEK on 2.05.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int a;
    int *aPtr;
    
    a = 9;
    aPtr = &a;
    
    printf("The adress of a is %p \nThe value of aPtr is %p ", &a, aPtr);
    
    printf("\nThe value of a is %d \nThe value of aPtr is %d ", a, *aPtr);
    
    printf("\n\nShowing that * and & operators are complements of each other\n &*aPtr = %p"
           " \n *&aPtr = %p \n", &*aPtr, *&aPtr);


    
    return 0;
}
