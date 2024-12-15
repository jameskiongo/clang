#include <stdbool.h>
#include <stdio.h>

int prime_numbers_nterm(int n);
int count_numbers(int n);
int prime_numbers(int n);
int sum_of_even(int n);
int factorial(int n);
int right_aligned(int n);
int main(void) {
  int n;
  printf("Any Number: ");
  scanf("%d", &n);
  prime_numbers_nterm(n);
}
int right_aligned(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n; k > i; k--) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
int factorial(int n) {
  int f = 1;
  for (int i = 1; i <= n; i++) {
    f = f * i;
  }
  printf("%d\n", f);
  return 0;
}
int sum_of_even(int n) {
  int x, count = 0;
  for (int i = 1; i <= n; i++) {
    x = 2 * i;
    count += x;
  }
  printf("%d \n", count);
  return 0;
}
int count_numbers(int n) {
  int count = 0;
  do {
    count++;
    n = n / 10;
  } while (n > 0);
  printf("%d\n", count);
  return 0;
}
int prime_numbers(int n) {
  bool isprime = true;
  if (n < 2) {
    printf("false\n");
    return 0;
  }
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      isprime = false;
      break;
    }
  }
  printf("%s\n", isprime ? "true" : "false");
  return 0;
}
int prime_numbers_nterm(int n) {
  bool isprime = true;
  if (n < 2) {
    printf("false \n");
    return 0;
  }
  for (int i = 2; i <= n; i++) {
    //
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        isprime = false;
        break;
      }
    }
    if (isprime) {
      printf("%d, \n", i);
    }
  }
  return 0;
}
