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

double silnia_rekurencja_double(double i){
  return (i > 0) ? (i * silnia_rekurencja(i - 1)): (1);
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
      printf("precyzja: %d \n", UINT_MAX);
      printf("Silnia: %li \n", silnia_pentla_long(n));
      printf("precyzja: %ld \n", ULONG_MAX);
      printf("Silnia: %f", silnia_pentla_double(n));
      printf("precyzja: %g \n", DBL_MAX);
    }
  else{
      printf("Silnia: %i \n", silnia_rekurencja(n));
      printf("Silnia: %f \n", silnia_rekurencja_double(n));
    }
  return 0;
}
