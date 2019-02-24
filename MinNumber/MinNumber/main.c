//
//  main.c
//  MinNumber
//
//  Created by SULTAN ZEYBEK on 20.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z;
    int min;
    int count;
    printf("Please enter 3 number:\n");
    scanf("%d %d %d",&x,&y,&z);
    if (x<y) {
        if(x<z) {
            min = x;
            count = 1;
            printf("Mininimum number between %d %d and %d is %d and the sequence is %d \n",x,y,z,min,count);
        }} else if(y<z){
            min = y;
            count = 2;
            printf("Mininimum number between %d %d and %d is %d sequence is %d\n",x,y,z,min,count);
        } else {
            min = z;
            count = 3;
            printf("Mininimum number between %d %d and %d is %d sequence is %d\n",x,y,z,min,count);
            
        }
    
    
    return 0;
}
