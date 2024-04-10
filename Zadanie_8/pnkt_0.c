#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

int main(int arg, char *argv[]){
    char *input = argv[1], *output = argv[2];
    int arr[couter(input) + 1], i;
    int tab[10];
    load(input, arr);
    paste(output, arr);
    copy(arr, tab);
    for(i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
        printf("%c, ", tab[i]);
    printf("\n");
    printf("znaki: %i \nczarne znaki: %i \nsłowa: %i \nlinie: %i \n", couter(input), characters(arr), words(arr), lines(arr));
    return 0;
}