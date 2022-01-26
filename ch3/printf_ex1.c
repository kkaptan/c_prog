#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int i, j;
  float x, y;

  i = 10;
  j = 20;
  x = 43.2892f;
  y = 5527.0f;

  /* 
   * The ordinary characters in the input string are 
   * copied to the output line.
   *
   * The four conversion specifications are replaced by
   * the values of the variables i, j, x, y
   * */  
  printf("i = %d, j = %d, x = %f, y = %f", i, j, x, y);

  return EXIT_SUCCESS;
}
