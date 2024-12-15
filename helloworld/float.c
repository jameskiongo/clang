#include <stdio.h>

int main(void) {
  int x;
  int y;
  printf("X: ");
  scanf("%d", &x);
  printf("Y: ");
  scanf("%d", &y);
  float z = (float)x / (float)y;
  printf("%.5f \n", z);
}
