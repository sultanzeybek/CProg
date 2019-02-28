//
//  main.c
//  Decimal2Binary
//
//  Created by SULTAN ZEYBEK on 27.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

void convert2Binary(int number);

int main(int argc, const char * argv[]) {
    convert2Binary(8);
    printf("\n");
    return 0;
}
void convert2Binary(int number){
    int remainder;
    int i =1;
    int last;
    
    while (number != 0) {
        remainder = number%2;
        last = last + remainder*i;
        i*=10;
        number = number /2;
    }
    printf("%d",last);

    
}
