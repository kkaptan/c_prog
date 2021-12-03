#include <stdio.h>

#define len(a) ((int) (sizeof(a) / sizeof(a[0])))

int main (void) {

  int a[10];
  char b[20];

  printf("int a[10] size is %lu, %lu\n", sizeof(a), sizeof(a[0]));
  printf("char b[20] size is %lu\n", sizeof(b));
  printf("len of a from sizeof %d\n", len(a));
  return 0;
}
