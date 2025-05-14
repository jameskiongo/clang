#include "stdio.h"

int main(void) {
  int even = 0;
  int sum = 0;
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    even = (2 * i);
    sum += even;
    printf("%d ", even);
  }
  printf("\n");
  printf("Sum: %d\n", sum);
}
