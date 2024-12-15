#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int elements[20];
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &elements[i]);
  }
  int sum = 0;
  for (int i = 0; i < elements_count; i++) {
    sum += elements[i];
  }
  printf("Sum: %d\n", sum);
  return 0;
}
