//
//  my_header.c
//  PatternExample
//
//  Created by SULTAN ZEYBEK on 27.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include "my_header.h"
#include <stdio.h>



void downRightTriangle(int size){
    for (int i =0; i<size; i++) {
        for (int j =0; j<size; j++) {
            if(i<size-j){
                printf(" ");
            }
          else  printf("*");
        }
        printf("\n");
    
    }
}

void upRightTriangle(int size){
    for (int i =0; i<size; i++) {
        for (int j =0; j<size; j++) {
            if(i>=j){
                printf(" ");
            }
            else  printf("*");
        }
        printf("\n");
        
    }
}
