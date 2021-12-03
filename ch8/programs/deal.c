#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main (void) {

  bool inhand[NUM_RANKS][NUM_SUITS] = {false};  
  int num_cards, rank, suit;
  char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
  char suit_code[] = {'h', 'd', 'c', 's'};

  printf("Enter number of cards in hand:");
  scanf("%d", &num_cards);

  srand((unsigned) time(NULL));

  while (num_cards > 0){

    rank = rand() % NUM_RANKS;
    suit = rand() % NUM_SUITS;

    //printf("%d * ", num_cards);
    if (!inhand[rank][suit]){
      inhand[rank][suit] = 1;
      printf("[%d] %c%c\n", num_cards, rank_code[rank], suit_code[suit]);
      num_cards--;   
    }
  }
  return 0;
}
