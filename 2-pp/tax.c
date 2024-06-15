//Calculate 5% tax
#include <stdio.h>
#define TAX 1.05f

int main(void)
{
  float amount;

  printf("Enter the dollar amount: ");
  scanf("%f", &amount);

  printf("The amount after tax is: %.2f\n", (amount * TAX));
}
