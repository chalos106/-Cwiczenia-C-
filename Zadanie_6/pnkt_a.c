#include <stdio.h>

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

void count(int counter[3], int licz[10]){
    int c;
    while( (c = getchar()) != EOF){ 
        if(if_numbers(c)){
            counter[0] ++;
            licz[ c - '0']++;
        }
        else if(c == ' ' || c == '\n' || c == '\t')
            counter[1] ++;
        else
            counter[2] ++;
    }
}

int main(){
    int counter[3], licz[10], i;
    count(counter, licz);
    printf("cyfry: %i, białe: %i, inne %i. \n", counter[0], counter[1], counter[2]);
    for( i = 0; i < 10; i++){
       printf("%i: %i \t",i, licz [i]); 
    }
    printf("\n"); 
    return 0;
}
