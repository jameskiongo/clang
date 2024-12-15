#include <stdio.h>

int main(void) {
  int x, y;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter a number: ");
  scanf("%d", &y);
  if (x < y) {
    printf("x is less than y\n");
  } else if (x == y) {
    printf("x is equal to y \n");
  } else if (x > y) {
    printf("x is not less than y\n");
  }
}
