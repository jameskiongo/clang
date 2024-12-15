#include <stdio.h>
/* #include <cs */
void meow(int n);
int main(void) { meow(2); }
void meow(int n) {
  for (int i = 0; i < n; i++) {

    printf("meow\n");
  }
}
