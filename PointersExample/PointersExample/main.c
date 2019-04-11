//
//  main.c
//  PointersExample
//
//  Created by SULTAN ZEYBEK on 3.04.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>


void power(int*,int);
void arraySum(int*, int*, int);
void arrayMax(int*, int*, int);
void arrayCopy( int*, int*, int);
//void deleteChar(const char*, char*);


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Sum of an Array Elements By Using Pointers\n");
    int max,sum;
    int array1 [5] = {1,2,3,4,5};
    int array2 [5];
    int dimension = sizeof(array1) / sizeof(int);
    arraySum(array1, &sum, dimension);
    arrayMax(array1,&max, dimension);
    arrayCopy(array1,array2,dimension);
    
    printf(" sum of array= %d\n",sum);
    
    int number = 2;
    int pow = 3;
    power((&number),pow);
    printf("%d \n",number);
    

    
    
    
    return 0;
}



void power(int *p, int power){
    int base = *p;
    for (int i=1; i<power; i++) {
        *p *= base;
    }
    
}

void arraySum( int* array, int* sum, int count){
    int i = 0;
    while (i<count) {
      // *sum += array[i];
        *sum += *(array+i);
        i++;
    }
}

void arrayMax( int* array, int* max, int count){
    int i = 0;
    *max = *(array);
    // *max = array[0]
    while (i<count) {
        if(*(array+i) > *max){
            *max = *(array+i);
        }
        
        i++;
    }
}

void arrayCopy( int* a1, int* a2, int count){
    int i = 0;
    while (i<count) {
       *(a2+i) = *(a1+i);
        i++;
    }
}

/*void deleteChar(const char* str1, char* str2){
    int i = 0 j = 0;
    while(str1[i] != '\0'){
        if(*(str1[i]) == 'a' )
        
    }
}*/

