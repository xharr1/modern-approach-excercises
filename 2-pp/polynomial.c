//Calculate a specific polynomial from an input value x
#include <stdio.h>

int main(void)
{
  int x, answer;

  printf("Enter a value for x to solve the polynomial: ");
  scanf("%d", &x);

  answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The answer is %d\n", answer);
}
