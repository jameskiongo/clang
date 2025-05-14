#include <stdio.h>
#include <string.h>
typedef struct {
  char name[50];
  char number[50];

} person;
int main(void) {
  person people[3];
  snprintf(people[0].name, sizeof(people[0].name), "james");
  snprintf(people[0].number, sizeof(people[0].number), "+1-121-121-1000");
  snprintf(people[1].name, sizeof(people[1].name), "brian");
  snprintf(people[1].number, sizeof(people[1].number), "+1-121-122-1111");
  snprintf(people[2].name, sizeof(people[2].name), "julia");
  snprintf(people[2].number, sizeof(people[2].number), "+1-121-111-0000");
  char name[20];
  printf("Enter Name: ");
  scanf("%s", name);
  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found: %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}
