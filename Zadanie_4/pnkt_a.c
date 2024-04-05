#include <stdio.h>
#include <limits.h>
#include <float.h>

unsigned silnia_pentla(unsigned i){
  unsigned n = 1;
  while(i > 0){
      n *= i;
      i --;
    }
  return(n);
}

unsigned long silnia_pentla_long(unsigned i){
  unsigned long n = 1;
  while(i > 0){
      n *= i;
      i --;
    }
  return(n);
}

double silnia_pentla_double(unsigned i){
  double n = 1;
  while(i > 0){
      n *= i;
      i --;
    }
  return(n);
}

unsigned silnia_rekurencja(unsigned i){
  if(i > 0)
    return (i * silnia_rekurencja(i - 1));
  return 1;
}

int main(){
  int n;
  char c;
  printf("Podaj liczbę do silni \n");
  scanf("%i",&n);
  printf("pętla / rekurencja [p/r] \n");
  scanf(" %c", &c);
  if (c == 'p'){
      printf("Silnia: %i \n", silnia_pentla(n));
      printf("precyzja: %u \n", UINT_MAX - 1);
      printf("Silnia: %lu \n", silnia_pentla_long(n));
      printf("precyzja: %lu \n", ULONG_MAX - 1);
      printf("Silnia: %f \n", silnia_pentla_double(n));
      printf("precyzja: %g \n", DBL_MAX);
    }
  else
    printf("Silnia: %i \n", silnia_rekurencja(n));
  return 0;
}
