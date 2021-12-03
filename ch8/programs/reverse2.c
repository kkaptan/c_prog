#include <stdio.h>

int main (void) {

  /*
   *
   * Variable Length Array - VLA
   * The following are also valid expressions: 
   * a[j*k]
   * a[m][n]
   *
   */
  int i, n;

  printf("Enter the number of numbers you want in reverse:");
  scanf("%d", &n);

  int a[n];

  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for (i = n-1; i >=0; i--){
    printf("%d\n", a[i]);
  }
  return 0;
}
