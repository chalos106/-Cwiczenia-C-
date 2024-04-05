#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

int main(int arg, char *argv[]){
    char *input = argv[1], *output = argv[2];
    int arr[couter(input)], size = couter(input), i;
    char tab[10];
    load(input, arr);
    paste(output, arr, size);
    copy(arr, tab, min(sizeof(tab) / sizeof(tab[0]), size));
    for(i = 0; i < min(sizeof(tab) / sizeof(tab[0]), size); i++)
        printf("%c, ", tab[i]);
    printf("znaki: %i \nczarne znaki: %i \nsłowa: %i \nlinie: %i \n", size, characters(arr, size), words(arr, size), lines(arr, size));
    return 0;
}
