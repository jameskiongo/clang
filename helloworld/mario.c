#include <stdio.h>

int main(void) {
  // the first for loop prints out the horizontal number of #
  int n;
  printf("Any number: ");
  scanf("%d", &n);
  do {

    printf("Any number: ");
    scanf("%d", &n);
  } while (n < 1);
  for (int i = 0; i < n; i++) {
    // TODO:  the second for loop prints out the vertical number of #
    for (int j = 0; j < n; j++) {
      printf("#");
    }
    printf("\n");
  }
}
