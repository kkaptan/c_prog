#include <stdio.h>

#define N 10

int main (void){
  int a[N];
  int i;
  
  for (i = 0; i < N; i++){
    scanf("%d", &a[i]);
  }

  for (i = N - 1; i >= 0; i--){
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}
