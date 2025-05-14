#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int cube = i * i * i;
    printf("Number is :%d and cube of %d is %d", i, i, cube);
    printf("\n");
  }
  printf("\n");
}
