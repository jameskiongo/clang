#include <stdio.h>

void draw(int n);
int main(void) {
  int height;
  printf("Height: ");
  scanf("%d", &height);
  draw(height);
}
void draw(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
}
