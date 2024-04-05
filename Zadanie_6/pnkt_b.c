#include <stdio.h>
#include <stdlib.h>

#define PATH_1 "plik.txt"
#define PATH_2 "wyniki.txt"

void filler(int tab[], int n){
    while(n >= 0){
        tab[n - 1] = n;
        n--;
    }
}

int if_numbers(char c){
    int i, nums[10];
    filler(nums, 10);
    for(i = 0; i < 10; i++)
        if(c == nums[i] + '0') 
            return 1;
    return 0; 
}

void count(int counter[3], int ints[10] ,FILE *pth){
    int c;
    while( (c = fgetc(pth)) != EOF){ 
        if(if_numbers(c)){
            counter[0] ++;
            ints[c - '0'] ++;
        }
        else if(c == ' ' || c == '\n' || c == '\t')
            counter[1] ++;
        else
            counter[2] ++;
    }
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

void copy(FILE *loc_1, FILE *loc_2){
    int c;
     while( (c = fgetc(loc_1)) != EOF){
        if (fputc(c, loc_2) == EOF){
            printf("Błąd pisania w pliku");
            exit(3);
        }
     }
}

int main()
{
    int counter[3], ints[10], i;
    FILE *loc_1, *loc_2;
    count(counter, ints ,open(PATH_1, "r"));
    copy((loc_1 = open(PATH_1, "r")), (loc_2 = open(PATH_2, "w")));
    close(loc_1);
    close(loc_2);
    printf("cyfry: %i, białe: %i, inne %i.\n", counter[0], counter[1], counter[2]);
    for( i = 0; i < 10; i++)
    {
       printf("%i: %i \t | \t",i, ints[i]); 
    }
    printf("\n"); 
    return 0;
}