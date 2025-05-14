#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d", n, i, i * n);
    printf("\n");
  }
  printf("\n");
}
