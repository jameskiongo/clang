#include "stdio.h"

int main(void) {

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 8; j++) {
      printf("%d X %d = %d  ", i, j, i * j);
    }
    printf("\n");
  }
  printf("\n");
}
