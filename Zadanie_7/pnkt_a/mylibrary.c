#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

int min(int a, int b){
    if(a > b)
        return b;
    return a;
}

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

void load(char file[], int arr[]){
    FILE *pth = open(file, "r");
    int i = 0;
    while((arr[i] = fgetc(pth)) != EOF) i++;
    close(pth);
}

void paste(char file[], int arr[], long unsigned int size){
    FILE *pth = open(file, "w");
    long unsigned int i;
    for(i = 0; i < size; i++){
        if(fputc(arr[i], pth) == EOF){
            printf("Błąd pisania w pliku");
            exit(3);
        }
    }
    close(pth);
}

void copy(int arr_1[], char arr_2[], int size){
    int i;
    for(i = 0; i < size; i++)   arr_2[i] = arr_1[i];
    printf("skopiowano pierwsze %i znaków\n", size);
}

int if_ch(int c){
    if(c != ' ' && c != '\t' && c != '\n')
        return 1;
    return 0;
}

int characters(int arr[], int size){
    int i, n = 0;
    for(i = 0; i < size; i++)
        if(if_ch(arr[i])) n++;
    return n;
}

int words(int arr[], int size){
    int i, n = 1;
    for(i = 1; i < size; i++)
        if(if_ch(arr[i]) && !if_ch(arr[i - 1])) n++;
    return n;
}

int lines(int arr[], int size){
    int i, n = 1;
    for(i = 1; i < size; i++)
        if(arr[i] == '\n') n++;
    return n;
}
