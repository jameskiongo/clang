#include <stdio.h>
typedef struct {
  char title[50];
  char author[50];
  int price;
} Book;
int main(void) {
  Book books[3];
  for (int i = 0; i < 3; i++) {
    printf("Book %d title", i);
    scanf("%s", books[i].title);
    printf("Book %d author", i);
    scanf("%s", books[i].author);
    printf("Book %d price", i);
    scanf("%d", &books[i].price);
  }
  for (int i = 0; i < 3; i++) {
  }
}
