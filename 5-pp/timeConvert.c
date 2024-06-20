/* Conterts 24 hour time to 12 hour time */
#include <stdio.h>

int main(void)
{
  int hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: ");
  if (hour == 0)
    hour += 12;
  if (hour < 12) {
    if (hour == 0) {
      hour += 12;
    }
    printf("%.2d:%.2d AM\n", hour, minute);
  } else {
    hour %= 12;
    if (hour == 0) {
      hour += 12;
    }
    printf("%.2d:%.2d PM\n", hour, minute);
  }
}
