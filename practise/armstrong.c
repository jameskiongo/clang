#include <stdio.h>

int first_number(int n);
int armstrong(int n);
int main() {
  int n;
  printf("Any Number: ");
  scanf("%d", &n);
  /* armstrong(n); */
  first_number(n);
}
int armstrong(int n) {
  int number_of_digits = 0;
  while (n >= 0) {
    n = n / 10;
    number_of_digits = number_of_digits + 1;
    printf("%d\n", n);
    printf("%d\n", number_of_digits);
  }
  return 0;
}
int first_number(int n) {
  while (n > 0) {
    int first_digit = n % 10;
    printf("%d\n", first_digit);
    n = n / 10;
  }
  return 0;
}
