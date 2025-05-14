#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
    printf("%d", i);
  }
  printf("\n");
  printf("Sum = %d", sum);
  printf("\n");
}
