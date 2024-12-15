#include <math.h>
#include <stdio.h>

int binary_to_decimal(int n);
int factorial(int n);
int main() {
  int num1;
  /* long num2; */
  printf("Enter a numbers: ");
  scanf("%d", &num1);
  /* scanf("%ld", &num2); */
  binary_to_decimal(num1);
}
int factorial(int n) {
  int sum = 1;
  for (int i = 1; i <= n; i++) {
    sum = sum * i;
  }
  printf("%d", sum);
  return 0;
}
int binary_to_decimal(int n) {
  int lastdigit;
  int total = 0;
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    lastdigit = n % 10;
    n = n / 10;
    total = (lastdigit * (pow(2, i)));
    sum = sum + total;
    printf("last %d\n", lastdigit);
    printf("total %d\n", total);
    printf("i %d\n", i);
    printf("n %d\n", n);
  }
  printf("sum -%d\n", sum);
  return 0;
}
