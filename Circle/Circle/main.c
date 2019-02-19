//
//  main.c
//  Circle
//
//  Created by SULTAN ZEYBEK on 19.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int r;
    double perimeter,area;
    double pi = 3.14;
    printf("Input circle radius");
    scanf("%d", &r);
    perimeter = 2 * pi * r;
    printf("The perimeter with radius of %d circle is %f \n", r,perimeter);
    area = pi * r * r;
    printf("The area with the  radius %d of circle is %f \n", r, area);
    return 0;
}
