#include "stdio.h"

int main(void) {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i;
    printf("%d", i);
  }
  printf("\n");
  printf("Sum = %d", sum);
  printf("\n");
}
