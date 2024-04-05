#include <stdio.h> 
#include <time.h>

double fibo_iteracja (int n){
  int i;
  double fibo[n];
  fibo[1] = 1;
  for(i = 2; i <= n; i++)
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  return fibo[n];
}

int main(){
  int num;
  time_t start, end;
  printf("podaj który wyraz ciągu:");
  scanf("%i", &num);
  time(&start);
  printf("koniec : %.0f\n", fibo_iteracja(num));
  time(&end);
  printf("%.0f s. \n", difftime(end, start));
  return 0;
}