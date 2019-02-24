//
//  main.c
//  ReverseNumber
//
//  Created by SULTAN ZEYBEK on 20.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, reverse = 0;
    
    printf("Enter a number to reverse\n");
    scanf("%d", &n);
    
    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n       = n/10;
    }
    
    printf("Reverse of entered number is = %d\n", reverse);
    return 0;
}
