#include <stdio.h>

unsigned silnia_pentla(unsigned i){
  unsigned n = 1;
  while(i > 0){
      n *= i;
      i --;
    }
  return(n);
}

unsigned silnia_rekurencja(unsigned i){
  if(i > 0)
    return (i * silnia_rekurencja(i - 1));
  else
    return 1;
}

int main(){
  int n;
  char c;
  printf("Podaj liczbę do silni \n");
  scanf("%i",&n);
  printf("pętla / rekurencja [p/r] \n");
  scanf(" %c", &c);
  if (c == 'p')
    printf("Silnia: %i \n", silnia_pentla(n));
  else
    printf("Silnia: %i \n", silnia_rekurencja(n));
  return 0;
}
