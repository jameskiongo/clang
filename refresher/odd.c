#include "stdio.h"

int main(void) {
  int odd = 0;
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    odd = (2 * i) - 1;
    sum += odd;
    printf("%d ", odd);
  }
  printf("\n");
  printf("Sum: %d\n", sum);
}
