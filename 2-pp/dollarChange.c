// Calculate the amount of bills based on dollar amount
#include <stdio.h>

int main(void) {
  int dollarAmount, twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollarAmount);

  twenties = dollarAmount / 20;
  dollarAmount = dollarAmount % 20;
  tens = dollarAmount / 10;
  dollarAmount = dollarAmount % 10;
  fives = dollarAmount / 5;
  dollarAmount = dollarAmount % 5;
  ones = dollarAmount;

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", ones);
}
