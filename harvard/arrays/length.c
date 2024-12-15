#include <stdio.h>
#include <string.h>

int main(void) {
  char name[30];
  printf("Full Name: ");
  /* scanf("%s", name); */
  fgets(name, sizeof(name), stdin);
  printf("%ld\n", strlen(name));
}
