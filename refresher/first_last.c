#include "stdio.h"

int first_number(int n);
int last_number(int n);
int main(void) {
  int n;
  printf("Test Data: ");
  scanf("%d", &n);
  int first = first_number(n);
  int last = last_number(n);
  printf("First digits: %d\n", first);
  printf("Last digits: %d\n", last);
}
int first_number(int n) {
  while (n >= 10) {
    n = n / 10;
  }
  return n % 10;
}
int last_number(int n) {
  int p = n % 10;
  return p;
}
