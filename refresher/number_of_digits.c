#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);
  int count = 0;
  while (n > 0) {
    n = n / 10;
    count++;
  }
  printf("Number of digits: %d\n", count);

  /* for (int i = 1; i <= n; i++) { */
  /* } */
}
