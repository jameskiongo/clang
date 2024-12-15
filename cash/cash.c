#include <ctype.h>
#include <stdio.h>

int main() {
  int cents, coins = 0;

  do {
    printf("Change owed: ");
    scanf("%d", &cents);
  } while (cents < 0 || cents == 0);

  // Count quarters
  coins += cents / 25; // Get the number of quarters
  cents %= 25;         // Update the remaining amount

  // Count dimes
  coins += cents / 10; // Get the number of dimes
  cents %= 10;         // Update the remaining amount

  // Count nickels
  coins += cents / 5; // Get the number of nickels
  cents %= 5;         // Update the remaining amount

  // Count pennies
  coins += cents; // The remaining cents are all pennies

  printf("%d\n", coins);

  return 0;
}
