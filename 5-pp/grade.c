/* Converts a numeric grade into a letter grade */
#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade > 100 || grade < 0) {
    printf("INVALID GRADE\n");
  } else if (grade < 60) {
    printf("Letter grade: F\n");
  } else if (grade < 70) {
    printf("Letter grade: D\n");
  } else if (grade < 80) {
    printf("Letter grade: C\n");
  } else if (grade < 90) {
    printf("Letter grade: B\n");
  } else {
    printf("Letter grade: A\n");
  }

  return 0;
}
