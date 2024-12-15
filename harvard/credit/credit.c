#include <stdbool.h>
#include <stdio.h>

int check_first(long credit_card);
int check_number_of_digits(long credit_card);
int check_first_numbers(long credit_card);
int check_card_validity(long credit_card);
int main(void) {
  long credit_card;
  printf("Number: ");
  scanf("%ld", &credit_card);
  if ((check_number_of_digits(credit_card)) <= 16 &&
      (check_number_of_digits(credit_card)) >= 13) {
    if ((check_card_validity(credit_card)) % 10 == 0) {
      if ((check_first_numbers(credit_card)) == 34 ||
          (check_first_numbers(credit_card)) == 37) {

        if (check_number_of_digits(credit_card) == 15) {
          printf("AMEX\n");
        } else {
          printf("INVALID\n");
        }
      } else if ((check_first_numbers(credit_card)) == 51 ||
                 (check_first_numbers(credit_card)) == 52 ||
                 (check_first_numbers(credit_card)) == 53 ||
                 (check_first_numbers(credit_card)) == 54 ||
                 (check_first_numbers(credit_card)) == 55

      ) {
        if (check_number_of_digits(credit_card) == 16) {
          printf("MASTERCARD\n");
        } else {
          printf("INVALID\n");
        }
      } else if (check_first(credit_card) == 4) {
        if (check_number_of_digits(credit_card) == 13 ||
            check_number_of_digits(credit_card) == 16) {
          printf("VISA\n");
        } else {
          printf("INVALID\n");
        }
      } else {
        printf("INVALID\n");
      }

    } else {
      printf("INVALID\n");
    }
  } else {
    printf("INVALID\n");
  }
}
int check_card_validity(long credit_card) {
  int is_second = 0; // Start with the last digit
  int second_last;
  int last;
  int sum = 0;
  int is_last = 1;
  int multiply = 0;

  while (credit_card > 0) {
    int digit = credit_card % 10; // Extract the last digit
    credit_card /= 10;            // Remove the last digit

    if (is_second) {
      second_last = digit;
      multiply = (second_last * 2);
      if (multiply >= 10) {
        int last = multiply % 10;
        int first = multiply / 10;
        /* printf("first: %d, last: %d\n", last, first); */
        multiply = last + first;
      }
      sum = sum + multiply;
    }
    if (is_last) {
      last = digit;
      sum = sum + last;
    }

    is_second = !is_second;
    is_last = !is_last;
  }

  return sum;
}
int check_first_numbers(long credit_card) {
  while (credit_card > 100) {
    credit_card /= 10;
  }
  return credit_card;
}
int check_number_of_digits(long credit_card) {
  int count = 1;
  for (int i = 0; i <= credit_card; i++) {
    credit_card /= 10;
    count++;
  }
  return count;
}
int check_first(long credit_card) {
  while (credit_card > 10) {
    credit_card /= 10;
  }
  return credit_card;
}
