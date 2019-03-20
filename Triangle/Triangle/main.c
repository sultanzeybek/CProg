//
//  main.c
//  Triangle
//
//  Created by SULTAN ZEYBEK on 20.03.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    for (int i=0; i<10; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
