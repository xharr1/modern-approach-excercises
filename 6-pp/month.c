/* prints a calendar based on input */
#include <stdio.h>

int main(void) {
  int month, week;

  printf("Enter number of days in month: ");
  scanf("%d", &month);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &week);

  for (int i = 1; i < week; i++) {
    printf("   ");
  }

  for (int i = 1; i <= month; i++) {
    printf("%3d", i);
    if ((i + week - 1) % 7 == 0) {
      printf("\n");
    }
  }

  printf("\n");

  return 0;
}
