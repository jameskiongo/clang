#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int elements[50];
  int reverse[50];
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &elements[i]);
  }
  for (int i = 0; i < elements_count; i++) {
  }
  return 0;
}
