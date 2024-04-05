#include <stdio.h>
#include <time.h>


double fibo (int n){
  if(n >= 1)
      return fibo(n - 1) + fibo(n - 2);
  return 1;
}

int main(){
  int num;
  time_t start, end;
  printf("podaj który wyraz ciągu:");
  scanf("%i", &num);
  time(&start);
  printf("koniec : %.0f\n", fibo(num - 2));
  time(&end);
  printf("%.0f s. \n", difftime(end, start));
  return 0;
}