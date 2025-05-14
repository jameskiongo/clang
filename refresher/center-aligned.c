#include "stdio.h"

int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);

  for (int i = 1, k = 1; i <= n; i++) {
    for (int j = n + 3; j > i; j--) {
      printf(" ");
    }
    for (int k = 1; k <= i; k++) {
      printf("# ");
    }

    printf("\n");
  }
}
