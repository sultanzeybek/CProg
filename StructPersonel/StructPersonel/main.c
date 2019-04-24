//
//  main.c
//  StructPersonel
//
//  Created by SULTAN ZEYBEK on 17.04.2019.
//  Copyright © 2019 SULTAN ZEYBEK. All rights reserved.
//

#include <stdio.h>
struct Personel{
    char adi[20];
    char soyadi[20];
    int maas;
}typedef Personel;

void Personel * PersonelUret(char *, char *, int);

int main(int argc, const char * argv[]) {
  
    Personel * gelenPersonel = PersonelUret("Sultan", "Zeybek", 1000);
    printf("%s\n", gelenPersonel->adi);
    return 0;
}


void Personel * PersonelUret(char * adi, char * soyadi, int maas){
    Personel * person = malloc(sizeof(Personel));
    strcpy(person->adi, adi);
    strcpy(person->soyadi, soyadi);
    person->maas =maas;
}
