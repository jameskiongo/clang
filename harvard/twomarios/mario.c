#include <stdio.h>

int build(int n);
int main(void) {
  int height;
  do {
    printf("Height: ");
    scanf("%d", &height);
  } while (height > 8 || height < 1);
  build(height);
}
int build(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n; k > i; k--) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("#");
    }
    printf("  ");
    for (int k = 1; k <= i; k++) {
      printf("#");
    }

    printf("\n");
  }
  return 0;
}
