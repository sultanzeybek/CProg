//
//  main.c
//  Structure
//
//  Created by SULTAN ZEYBEK on 6.03.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>



struct date {
    int day;
    int month;
    int year;
} birthday = {01,01,2000};

typedef struct{
    int gun;
    int ay;
    int yil;
}Tarih;

typedef struct {
    int x;
    int y;
} Point;




void TarihYaz(Tarih t){
    printf("%d ",t.gun);
    switch (t.ay) {
        case 1:
            printf("Ocak ");
            break;
        case 2:
            printf("Subat ");
        default:
            break;
    }
    printf("%d \n",t.yil);
    
}

Point CalculateNearestCoordinate(Point pList[],Point center, int size) {
    
    int minimum_index = 0;
    double min_distance = sqrt(pow((center.x -pList[0].x), 2) + pow((center.y - pList[0].y),2));
    for (int i=0; i<size; i++) {
     double distance = sqrt(pow((center.x -pList[i].x), 2) + pow((center.y - pList[i].y),2));
        if(distance < min_distance) {
            min_distance = distance;
            minimum_index = i;
        }
    }
    return  pList[minimum_index];
}

int main(int argc, const char * argv[]) {
    
    Point point1 = {1,2};
    Point point2 = {0,3};
    
    Point pList [10];
    for (int i =0; i<10; i++) {
        pList[i].x = rand()%100;
        pList[i].y = rand()%100;
        printf("%d. point (%d, %d)\n",i,pList[i].x,pList[i].y);

    }
    
    Point nearestPoint = CalculateNearestCoordinate(pList, point1, 10);
    printf("nearest point (%d, %d)\n",nearestPoint.x,nearestPoint.y);
    
    Tarih t1 = {25,1,2009};
    Tarih t2 = {5,2,1999};
    TarihYaz(t1);
    TarihYaz(t2);
    
    return 0;
}
