#include <stdio.h>

int main (void) {
  /*
   *
   * Array initialization
   *
   */

  int a[10] = {0,1,2,3,4,5,6,7,8,9};
  int b[10] = {1,2,3,4}; // rest are filled with 0
  int c[10] = {0}; // all elements are 0;
  int d[] = {1,2,3,4,5}; //length may be omitted from declaration

  /*
   *
   * Designated initialization
   *
   */

  int e[100] = {[50] = 10 , [98] = 120, [99] = 150};
  int f[] = {[10] = 1, [20] = 12, [49] = 43}; // no length means compilers takes laregest index and sets it last elem
  
  /*
   *
   * Mixed initialization
   *
   */

  int g[] = {1,2,3,4, [10] = 5, 6, 7, [20] = 8};
  return 0;
}
