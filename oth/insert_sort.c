#include <stdio.h>
#include <stdlib.h>

#define N 10000

int *insert_sort(int a[], int n){
  int i, j;
  int tmp;

  for (i = 1; i<n; i++){
    j = i;
    while (j>0 && a[j]<a[j-1]){
      if (a[j] < a[j-1]){
        tmp = a[j];
        a[j] = a[j-1];
        a[j-1] = tmp;
      }
      j--;
    }
  }
  return a;
}


void read_numbers(int a[], int n){
  int i;
  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

}

int main (void) {
  int i;
  int a[N];
  int *b;

  read_numbers(a, N);
  
  b = insert_sort(a, N);

  for (i = 0 ; i< N; i++){
    printf("%d ", b[i]);
  }

  return EXIT_SUCCESS;
}
