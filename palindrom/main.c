#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x);
int main() {
  int x;
  printf("Any number; ");
  scanf("%d", &x);
  isPalindrome(x);
}
bool isPalindrome(int x) {
  int reverse;
  while (x > 0) {
    int last = x % 10;
    x /= 10;
  }
  return false;
  //
}
