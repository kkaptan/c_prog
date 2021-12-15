#include <stdio.h>

#define N 100

int is_prime(int n){
  int i;
  for (i = 2; i < n; i++){
    //printf("  %d mod %d = %d\n", n, i, n % i );
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main (void){
  int j, p_n;
  for (j = 1; j < N; j++){
     p_n = (j*j)+j+41;
    if (is_prime(p_n)){
      printf("[%d] %d is prime\n",j, p_n);
    }
    else {
      //printf("[%d] %d is not prime\n",j, p_n);
      break;
    }
  } 
  return 0;
}
