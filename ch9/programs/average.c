#include <stdio.h>

/*
 *
 * Average and Pairwise average
 *
 */

double average (double a, double b) {
  return (a + b) / 2;
}

int main (void) {
  double x, y, z;
  double avg;
  avg = average (12.5, 12.5);
  printf("%g\n", avg);

  printf("Enter three numbers:");
  scanf("%lf%lf%lf", &x, &y, &z);

  printf("Average of %g and %g: %g\n", x, y, average(x, y));
  printf("Average of %g and %g: %g\n", y, z, average(y, z));
  printf("Average of %g and %g: %g\n", x, z, average(x, z));
  return 0;
}
