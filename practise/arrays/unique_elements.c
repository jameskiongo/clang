#include <stdbool.h>
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
  for (int b = 0; b < elements; b++) {
    int count = 0;
    for (int c = 0; c < elements; c++) {
      if (b != c) {
        if (array[b] == array[c]) {
          count++;
        }
      }
    }
    if (count == 0) {
      printf("%d", array[b]);
    }
  }
  printf("\n");
  /* return 0; */
}
