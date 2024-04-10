#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

FILE * open(char path[], char mode[]){
    if (fopen(path, mode) == NULL){
        printf("Blad otwarcia pliku %s\n",path);
        exit(1);
     }
    return fopen(path, mode);
}

void close(FILE *loc){
    if (fclose(loc) == EOF){ 
        printf("Blad zamykania pliku jednego z plików");
        exit(2);
    }
}

int couter(char file[]){
    FILE *pth = open(file, "r");
    int i = 0;
    while(fgetc(pth) != EOF)    i++;
    close(pth);
    return i;
}

void load(char file[], int *restrict arr){
    FILE *pth = open(file, "r");
    while((*arr = fgetc(pth)) != EOF && *arr++ > 0); //WARUNEK > 0 JEST Z JAKIEGOŚ POWODU POTRZEBNY, BEZ NIEGO CZYTA -1 NA KOŃCU
    *arr = '\0';
    close(pth);
}

void paste(char file[], const int *restrict arr){
    FILE *pth = open(file, "w");
    while(*arr) fputc(*arr++, pth);
    close(pth);
}

void copy(const int *restrict arr_1, int *restrict arr_2){
    int i = 0;
    while((*arr_2++ = *arr_1++))   i++;

    printf("skopiowano pierwsze %i znaków\n", i); 
}

int if_ch(int c){
    if(c != ' ' && c != '\t' && c != '\n')
        return 1;
    return 0;
}

int characters(const int *restrict arr){
    int n = 0;
    while(*arr)
        if(if_ch(*arr++)) n++;
    return n;
}

int words(const int *restrict arr){
    int n = 1;
    int arr_p;
    while(*arr){
        arr_p = *arr++;
        if(if_ch(*arr) && !if_ch(arr_p)) n++;
    }
    return n;
}

int lines(const int *restrict arr){
    int n = 1;
    while(*arr++ != '\0')
        if(*arr == '\n') n++;
    return n;
}
