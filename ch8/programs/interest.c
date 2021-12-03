#include <stdio.h>

#define SIZE (sizeof(values) / sizeof(values[0]))
#define INITIAL_BALANCE 100;

int main (void){
  int i, j, low_rate, year, num_years;
  double values[5];

  printf("Enter interest rate:");
  scanf("%d", &low_rate);
  printf("Enter number of years:");
  scanf("%d", &num_years);

  for (i = 0; i < SIZE; i++){
    printf("%6d%%", low_rate + i);
    values[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++){
    printf("%3d   ", year);
    for (j = 0; j < SIZE; j++){
      values[j] += (double) (low_rate + j) / 100 * values[j];
      printf("%7.2f", values[j]);
    }
    printf("\n");
  }
  return 0;
}
