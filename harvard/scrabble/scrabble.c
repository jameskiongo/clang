#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char s[]);
int main(void) {
  char player1[40], player2[40];
  printf("Player 1: ");
  scanf("%s", player1);
  printf("Player 2: ");
  scanf("%s", player2);
  printf("Welcome to the game of Scrabble, %s and %s!\n", player1, player2);
}
int compute_score(char s[]) {
  for (int i = 0, n = strlen(s); i <= n; i++) {
  }
  return 0;
  //
}
