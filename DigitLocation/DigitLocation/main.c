//
//  main.c
//  DigitLocation
//
//  Created by SULTAN ZEYBEK on 20.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    int number,first_number;
    int digit=4;
    int location=0;
    printf("Enter number\n");
    scanf("%d",&number);
    first_number = number;
    while (number>0) {
        int temp = number % 10;
        number = number / 10;
        location++;
        if(temp == digit){
            
            printf("%d is contain %d \n",first_number,digit);
            
            
        }
        
    }
   
    return 0;
}
