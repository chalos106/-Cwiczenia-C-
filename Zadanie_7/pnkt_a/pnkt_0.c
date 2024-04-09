#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

#define SIZE 30
#define SIZE_C 5

int main(int arg, char *argv[]){
    char *input = argv[1], *output = argv[2];
    int arr[SIZE], i, j;
    int tab[SIZE_C];
    while((arr[i] = getchar()) != EOF && i < SIZE)  i++;
    copy(arr, tab, min(SIZE_C, i));
    for(j = 0; j < min(SIZE_C, i); j++)
        printf("%i: %c\n", j, tab[j]);
    printf("znaki: %i \nczarne znaki: %i \nsłowa: %i \nlinie: %i \n", i + 1, characters(arr, i), words(arr, i), lines(arr, i));
    return 0;
}
