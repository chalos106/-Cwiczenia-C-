#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

/*
TO DOES 
KOPIOWANIE 
*/

int main(int arg, char *argv[]){
    char *input = argv[1], *output = argv[2];
    int arr[couter(input)], i;
    int tab[10];
    load(input, arr);
    paste(output, arr);
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%i, ", arr[i]);
    copy(arr, tab);
    for(i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
        printf("%c, ", tab[i]);
    printf("znaki: %i \nczarne znaki: %i \nsłowa: %i \nlinie: %i \n", couter(input), characters(arr), words(arr), lines(arr));
    return 0;
}
