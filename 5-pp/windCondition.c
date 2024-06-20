/* Provides a condition based on wind speed */
#include <stdio.h>

int main(void)
{
  float knots;

  printf("Enter the wind speed in knots: ");
  scanf("%f", &knots);

  printf("The wind is ");
  if (knots < 1) {
    printf("calm\n");
  } else if (knots < 4) {
    printf("a light air\n");
  } else if (knots < 28) {
    printf("a breeze\n");
  } else if (knots < 48) {
    printf("a gale\n");
  } else if (knots <= 63) {
    printf("a storm\n");
  } else {
    printf("a hurricane\n");
  }
}
