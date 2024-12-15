#include <stdio.h>

int add(int x, int y);
int main(void) {
  int x;
  int y;
  printf("X: ");
  scanf("%d", &x);
  printf("Y: ");
  scanf("%d", &y);
  printf("%i\n", add(x, y));
}
int add(int x, int y) { return x + y; }
