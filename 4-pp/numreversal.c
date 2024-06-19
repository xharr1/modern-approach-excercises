/* Prints the reverse of an imported number */
#include <stdio.h>

int main(void)
{
  int ones, tens, hundreds;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &hundreds, &tens, &ones);

  //ones = inNum % 10;
  //tens = (inNum % 100) / 10;
  //hundreds = inNum / 100;

  printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

  return 0;
}
