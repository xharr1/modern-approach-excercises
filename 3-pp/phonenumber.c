/* Accept and print a phone number */
#include <stdio.h>

int main(void)
{
  int area, set1, set2;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &area, &set1, &set2);

  printf("You entered %d.%d.%d\n", area, set1, set2);

  return 0;
}
