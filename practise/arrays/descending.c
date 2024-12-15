#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int elements[100];
  int second_elements[100];
  int merged[100];
  int sorted[100];

  printf("First Array: ");
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &elements[i]);
  }
  printf("Second Array: ");
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &second_elements[i]);
  }
  for (int m = 0; m < elements_count; m++) {
    for (int n = 0; n < elements_count; n++) {
    }
  }
  printf("\n");

  return 0;
}
