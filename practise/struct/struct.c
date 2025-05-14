#include <stdio.h>
typedef struct {
  char name[50];
  int age;
  float total_marks;

} Student;
int main(void) {
  Student students[2];
  //
  float average_marks = 0;
  for (int i = 0; i < 2; i++) {
    printf("Student %d name: ", i);
    scanf("%s", students[i].name);
    printf("Student %d age: ", i);
    scanf("%d", &students[i].age);
    printf("Student %d marks: ", i);
    scanf("%f", &students[i].total_marks);
    average_marks += students[i].total_marks;
  }
  for (int i = 0; i < 2; i++) {
    printf("\nStudent %d name: %s\n", i, students[i].name);
    printf("Student %d age: %d\n", i, students[i].age);
    printf("Student %d marks: %f\n", i, students[i].total_marks);
  }
  printf("Average: %.2f", average_marks / 2);
}
