//
//  main.c
//  FindWordIndex
//
//  Created by SULTAN ZEYBEK on 13.03.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

void findWord(char array1 [], int size1, char array2 [], int size2){
    
    for (int i=0; i<size1; i++) {
        int matchNumber=0;
        for (int j=0; j<size2; j++) {
            if(array1[i+j] == array2[j]){
                matchNumber++;
            } else break;
            
        }
        if (matchNumber == size2) {
            printf("%d\n", i);
        }
    }
}

int main(int argc, const char * argv[]) {
   
    char array1 [] = "Fatih Sultan";
    int size1 = 12;
    char array2 [] = "Sultan";
    int size2 = 6;
    
    findWord(array1, size1, array2, size2);
    
    
    
    return 0;
}
