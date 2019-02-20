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
    printf("Please enter 3 number:\n");
    scanf("%d %d %d",&x,&y,&z);
    if (x<y) {
        if(x<z) {
            min = x;
            printf("Mininimum number between %d %d and %d is %d\n",x,y,z,min);
        }} else if(y<z){
            min = y;
            printf("Mininimum number between %d %d and %d is %d\n",x,y,z,min);
        } else {
            min = z;
            printf("Mininimum number between %d %d and %d is %d\n",x,y,z,min);
            
        }
    
    
    return 0;
}
