#include <stdio.h>
#include <stdlib.h>



int main (void){
  int i;
  char sel;

  sel = 'o';

  for (i = 1; i <= 100; i++){
    if ((sel == 'e' && i % 2 == 0) || (sel == 'o' && i % 2 !=0)){
     printf("%3.2d ", i);   
    }
    else if ((sel == 'e' && i % 2 != 0)||(sel == 'o' && i % 2 == 0)){ 
      printf("    ");
    }

    if (i % 10 == 0){
      printf("\n");
    }

  }
}
