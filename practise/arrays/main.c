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
  printf("Elements in arrays are: ");
  for (int i = 0; i < elements_count; i++) {
    printf("%d ", elements[i]);
  }
  printf("\n");

  for (int i = (elements_count - 1); i >= 0; i--) {
    printf("%d ", elements[i]);
  }

  printf("\n");
  return 0;
}
