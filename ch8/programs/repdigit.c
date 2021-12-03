#include <stdio.h>
#include <stdbool.h>

#define N 5


int main (void){

  int i;
  long n;
  long digit;
  bool digit_seen[10] = {false};

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0){
    digit = n % 10;
    if (digit_seen[digit] == true){
      break;
    }
    digit_seen[digit] = true;
    n = n / 10;
  }
  if (n > 0) {
    printf("Repeated Digit\n");
  }
  else {
    printf("No Repeated Digit\n");
  }
  return 0;
}
