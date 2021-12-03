#include <stdio.h>

#define N 10


int main (void){


  /*
   *
   *Multidimension - Idenditiy matrix 
   *
   */

  int a[N][N];
  int i, j;

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      if (i == j){
        a[i][j] = 1; 
      }
      else {
        a[i][j] = 0;
      }
    }
  }

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  /*
   *
   * Designated assignment of multi-dimension 
   *
   */

  double iden[2][2] = {[0][0] = 1.0, [1][1] = 1.0};  

  for (i = 0; i < 2; i ++){
    for (j = 0; j < 2; j ++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;

}
