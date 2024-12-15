#include <stdio.h>

int practise(int n);
int right_angle_number(int n);
int odd_number_nth_term(int n);
int natural_numbers_nth(int n);
int n_term(int n);
int multiplier_table(int n);
int multiplication_table(int n);
int cubed(int n);
int natural_numbers(int n);
int even_numbers(int n);
int sum_numbers(int n);
int odd_numbers(int n);
int sum_even_numbers(int n);
int main() {
  int n;
  printf("Any number: ");
  scanf("%d", &n);
  practise(n);
}
int natural_numbers(int n) {
  int i = 1;
  while (i <= n) {
    printf("%d\n", i);
    i++;
  }
  return 0;
}
int sum_numbers(int n) {
  int i = 0;
  int count = 0;
  while (i <= n) {
    count = count + i;
    i++;
  }
  printf("%d\n", count);
  return 0;
}
int even_numbers(int n) {
  int i = 0;
  while (i <= n) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
int odd_numbers(int n) {
  int i = 0;
  while (i <= n) {
    if (i % 2 != 0) {
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
int sum_even_numbers(int n) {
  int i = 0;
  int count = 0;
  while (i <= n) {
    if (i % 2 == 0) {
      count += i;
    }
    i++;
  }
  printf("%d\n", count);
  return 0;
}
int cubed(int n) {
  int y = n * n * n;
  printf("%d\n", y);
  return y;
}
int multiplication_table(int n) {
  int i = 0;
  while (i <= n) {
    printf("%d X %d = %d\n", n, i, n * i);
    i++;
  }
  return 0;
}
int multiplier_table(int n) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      printf("%d X %d = %d  ", i, j, i * j);
    }
    printf("\n");
  }

  return 0;
}
int natural_numbers_nth(int n) {
  for (int i = 0; i <= n; i++) {
    printf("%d \n", i);
  }
  return 0;
}
int n_term(int n) {
  for (int i = 0; i <= n; i++) {
    if (i % 2 != 0) {
      printf("%d \n", i);
    }
  }
  return 0;
}
int odd_number_nth_term(int n) {
  for (int i = 1; i <= n; i++) {
    int j = 2 * i - 1;
    printf("%d \n", j); // Print the odd number.
  }
  return 0;
}
int right_angle_number(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
int practise(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d X %d = %d  ", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
