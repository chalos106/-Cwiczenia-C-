#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

#define SIZE 30

int min(int a, int b){
    if(a > b)
        return b;
    return a;
}

int main(int arg, char *argv[]){
    char *input = argv[1], *output = argv[2];
    int arr[SIZE], i, j;
    char tab[10];
    while((arr[i] = getchar()) != EOF && i < SIZE){
        i++;
    }
    copy(arr, tab, min(sizeof(tab) / sizeof(tab[0]), i));
    for(j = 0; j < sizeof(tab) / sizeof(tab[0]) && j <= i; j++)
        printf("%c, ", tab[i]);
    printf("znaki: %i \nczarne znaki: %i \nsłowa: %i \nlinie: %i \n", i + 1, characters(arr, i), words(arr, i), lines(arr, i));
    return 0;
}
