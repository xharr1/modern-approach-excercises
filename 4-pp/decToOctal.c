/* converts a decimal number to octal */
#include <stdio.h>

int main(void)
{
  int decimal, tenThousands, thousands, hundreds, tens, ones;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &decimal);

  ones = decimal % 8;
  decimal /= 8;
  tens = decimal % 8;
  decimal /= 8;
  hundreds = decimal % 8;
  decimal /= 8;
  thousands = decimal % 8;
  decimal /= 8;
  tenThousands = decimal % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", tenThousands, thousands, hundreds, tens, ones);

  return 0;
}  
