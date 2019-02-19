//
//  main.c
//  Rectangle
//
//  Created by SULTAN ZEYBEK on 19.02.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
 
    int a,b;
    printf("Input the short and long edge of regtangle\n");
    scanf("%d %d", &a,&b);
    printf("The perimeter of the regtangle is %d\n",2*(a+b));
    printf("The area of the regtangle is %d\n",a*b);

    return 0;
}
