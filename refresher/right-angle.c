#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  for (int i = 1, k = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", k++);
    }
    printf("\n");
  }
}
