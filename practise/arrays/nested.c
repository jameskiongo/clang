#include <stdio.h>

int main(void) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("I:%d ", i);
      printf("J:%d ", j);
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
