#include <stdio.h>

int right_aligned(int n);
int mario(int n);
int even(int n);
int factorial(int n);
int odd_numbers_and_sum(int n);
int multiplication_table(int n);
int cubed(int n);
int sum_and_average_n_term(int n);
int sum_and_term_n_term(int n);
int sum_of_n_term(int n);
int natural_numbers_n_term(int n);
int main(void) {
  int n;
  do {
    printf("Any number ");
    scanf("%d", &n);
  } while (n <= 0);
  right_aligned(n);
}
int natural_numbers_n_term(int n) {
  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  return 0;
}
int sum_of_n_term(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum = sum + i;
  }
  printf("%d\n", sum);
  return 0;
}
int sum_and_term_n_term(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
    sum = sum + i;
  }
  printf("\n");
  printf("%d\n", sum);
  return 0;
}
int sum_and_average_n_term(int n) {
  float sum = 0;
  float average;
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }
  /* average = float(sum) / float(n); */
  average = sum / n;
  printf("Sum is %.2f, and average is %.2f\n", sum, average);
  return 0;
}
int cubed(int n) {
  printf("%d", n * n * n);
  return 0;
  //
}
int multiplication_table(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d X %d = %d ", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
int odd_numbers_and_sum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int odd_number = 2 * i - 1;
    printf("oddnumber: %d\n", odd_number);
    sum = sum + odd_number;
  }
  printf("%d\n", sum);
  return 0;
}
int factorial(int n) {
  int factor = 1;
  for (int i = 1; i <= n; i++) {
    factor = factor * i;
    /* printf("%d", factor); */
  }
  printf("%d\n", factor);
  return 0;
}
int even(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    int even = 2 * i;
    printf("%d \n", even);
    sum += even;
  }
  printf("%d \n", sum);
  return 0;
}
int mario(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
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
