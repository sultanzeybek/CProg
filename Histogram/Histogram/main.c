//
//  main.c
//  Histogram
//
//  Created by SULTAN ZEYBEK on 20.03.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
#include <math.h>


void pattern(double r){
    for (int i =0; i<r*r; i++) {
        for (int j=0; j<r*r; j++) {
            
            double distance = sqrt(pow(i-r, 2) +pow(j-r, 2));
            if(distance==r) {
                printf("***");
            }
            else printf("  ");
        }
        printf("\n");
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    pattern(10);
    
    
    
    return 0;
}
