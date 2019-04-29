//
//  main.c
//  BookStruct
//
//  Created by SULTAN ZEYBEK on 24.04.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct Book{
    char adi[20];
    char yazar[20];
    int id;
    int tarih;
} typedef Book;

void constructBook(char *, char *, int, int);
void kitapEkle(Book*);
void kitapSil(Book*);
void kitapYazdir(Book*);
void initilizeBookArray(int);
int books_size = 3;

Book ** books;

int main() {
    initilizeBookArray(3);
    Book *b1 = NULL;
    strcpy(b1->adi, "Yeraltindan Notlar");
    strcpy(b1->yazar, "Dostoyevski");
    b1->id = 1;
    b1->tarih = 1234;
    
    kitapYazdir(b1);
   
    return 0;
}
void constructBook(char * adi, char * yazar, int id, int tarih ){
    Book * book = malloc(sizeof(Book));
    strcpy(book->adi, adi);
    strcpy(book->yazar, yazar);
    book->id = id;
    book->tarih = tarih;
}


void kitapEkle(Book *b){
    int i = 0;
    while(((*(books+i)) != NULL) && i<books_size){
        i++;
    }
    if (i == books_size) {
        //boyut artir
    }
    
     * (books+i) = b;
}
void initilizeBookArray(int size){
   books = malloc(sizeof(Book) * size);
}

void kitapYazdir(Book * b){
    printf("%d "  ,b->id);
    printf("%s" ,b->adi);
    printf("%s " ,b->yazar);
    printf("%d " ,b->tarih);

}
