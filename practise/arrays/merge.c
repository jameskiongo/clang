#include <stdio.h>

int main(void) {
  int elements_count;
  printf("Number of elements: ");
  scanf("%d", &elements_count);
  int first[100];
  int second[100];
  int combined[100];
  printf("First Array: \n");
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &first[i]);
    combined[i] = first[i];
  }
  printf("Second Array: \n");
  for (int i = 0; i < elements_count; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &second[i]);
    combined[i + (elements_count)] = second[i];
  }
  printf("\n");

  for (int i = 0; i < (elements_count + elements_count); i++) {
    for (int j = i + 1; j < (elements_count + elements_count); j++) {
      if (combined[j] < combined[i]) {
        int temp;
        temp = combined[j];
        combined[j] = combined[i];
        combined[i] = temp;

        /* temp = combined[i]; */
        /* combined[i] = combined[j]; */
        /* combined[j] = temp; */
        /* break; */
      }
    }
  }

  for (int i = 0; i < elements_count + elements_count; i++) {
    printf("%d", combined[i]);
  }
  printf("\n");

  return 0;
}
