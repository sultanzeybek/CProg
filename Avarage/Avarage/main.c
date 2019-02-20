//
//  main.c
//  Avarage
//
//  Created by SULTAN ZEYBEK on 19.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z;
    float avr;
    printf("Please enter three number\n");
    scanf("%d %d %d",&x,&y,&z);
    avr = (x+y+z)/3;
    printf("The avarage of numbers is %.3f\n", avr );
    return 0;
}
