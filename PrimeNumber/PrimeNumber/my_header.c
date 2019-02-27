//
//  my_header.c
//  PrimeNumber
//
//  Created by SULTAN ZEYBEK on 27.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include "my_header.h"
#include <stdio.h>


int isPrime(int number){
    int flag = 1;
    for (int i=2; i<=number/2;i++) {
        if(number %i == 0){
            flag = 0;
        }
        
    }
    if (number == 1)
    {
        flag = 0;
        printf("1 is neither a prime nor a composite number.");
    }
    if (flag == 1) printf("%d is prime number\n", number);
            else  printf("%d is not prime number\n", number);

    return flag;
   
 }
int numberOfPrime(int start, int end){
    int counter = 0;
    
    for (int i =start; i<=end; i++) {
        if (isPrime(i)) {
            counter++;
        }
    }
    
    return counter;
    
}
