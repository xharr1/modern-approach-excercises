/* Compares 2 dates and states which comes first */
#include <stdio.h>

int main(void) {
  int month, day, year, combined, earliest;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  earliest = year * 10000 + month * 100 + day;
  //printf("Earliest: %d\n", earliest);

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  combined = year * 10000 + month * 100 + day;
  //printf("Combined: %d\n", combined);

  while (combined != 0) {

    if (combined < earliest) {
      earliest = combined;
      //printf("Earliest: %d\n", earliest);
    }
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    combined = year * 10000 + month * 100 + day;
    //printf("Combined: %d\n", combined);
  }

  year = earliest / 10000;
  //printf("Year: %d\n", year);
  earliest %= 10000;
  //printf("Earliest: %d\n", earliest);
  month = earliest / 100;
  //printf("Month: %d\n", month);
  day = earliest % 100;
  //printf("Day: %d\n", day);

  printf("%d/%d/%.2d is the earliest date\n", month, day, year);

  return 0;
}
