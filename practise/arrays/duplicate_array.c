#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int elements[100];
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &elements[i]);
  }
  int repeated = 0;
  for (int i = 0; i < elements_count; i++) {
    for (int j = i + 1; j < elements_count; j++) {
      if (elements[i] != elements[j]) {
        repeated++;
        printf("%d ", elements[i]);
        break;
      }
    }
  }
  printf("\n");

  return 0;
}
