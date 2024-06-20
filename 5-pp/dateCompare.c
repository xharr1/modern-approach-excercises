/* Compares 2 dates and states which comes first */
#include <stdio.h>

int main(void)
{
  int month, day, year, combined, month2, day2, year2, combined2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month2, &day2, &year2);

  combined = year * 10000 + month * 100 + day;
  printf("Combined: %d\n", combined);
  combined2 = year2 * 10000 + month2 * 100 + day2;
  printf("Combined: %d\n", combined2);

  if (combined < combined2)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month, day, year, month2, day2, year2);
  else
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month, day, year);

  return 0;
}
