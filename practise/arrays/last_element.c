#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int elements[50];
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &elements[i]);
  }
  /* printf("Size: %d\n", elements[size - 1]); */
  for (int i = elements_count; i > 0; i--) {
    printf("%d", elements[i - 1]);
  }
  /* int size = sizeof(elements) / sizeof(elements[0]); */
  /* printf("%d", elements[elements_count - 1]); */

  printf("\n");
  return 0;
}
