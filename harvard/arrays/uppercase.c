#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char s[20];
  printf("After: ");
  scanf("%s", s);
  for (int i = 0, n = strlen(s); i < n; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      printf("%c", toupper(s[i]));
    } else {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}
