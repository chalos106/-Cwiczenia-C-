#include <stdio.h>

void fibo_iteracja (double fibo[], int n){
  int i;
  fibo[0] = 0; 
  fibo[1] = 1;
  for(i = 2; i <= n; i++)
    fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main(){
  int min = 0, max = 0, i;
  double fibo[100];
  fibo_iteracja(fibo, 100);
  do{
    printf("podaj min (min 0): \n");
    scanf("%i", &min);
    printf("podaj max (max 100): \n");
    scanf("%i", &max);
  } while(min > max);
  for(i = min; i <= max; i++)
    printf("%.0f  ", fibo[i]);
  return 0;
}