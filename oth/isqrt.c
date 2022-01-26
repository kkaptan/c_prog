#include <stdio.h>
#include <stdlib.h>


int isqrt(int n){
  int i = 1;

  while (i*i < n){
    ++i;
  }
   return i - (i * i != n);
}

int main (void){

  int p = 4;
  int q = 5;
  int r = 6;
  int s = 9;

  printf ("isqrt(%d) -> %d\n", p, isqrt(p));
  printf ("isqrt(%d) -> %d\n", q, isqrt(q));
  printf ("isqrt(%d) -> %d\n", r, isqrt(r));
  printf ("isqrt(%d) -> %d\n", s, isqrt(s));

  return EXIT_SUCCESS;
}
