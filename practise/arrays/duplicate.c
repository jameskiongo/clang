#include <stdio.h>

int main(void) {
  int elements;
  int array[100];
  printf("Number of elements: ");
  scanf("%d", &elements);
  for (int i = 0; i < elements; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &array[i]);
  }
  int duplicate = 0;
  for (int b = 0; b <= elements; b++) {
    for (int c = b + 1; c <= elements; c++) {
      if (array[b] == array[c]) {
        duplicate++;
        break;
      }
    }
  }
  printf("Duplicated items are: %d\n", duplicate);
  return 0;
}
