//Calculates the balance of the loan after 3 payments
#include <stdio.h>

int main(void)
{
  float loan, rate, payment, first_payment, second_payment, third_payment;

  printf("Enter the loan amount: ");
  scanf("%f", &loan);
  printf("Enter the interest rate: ");
  scanf("%f", &rate);
  printf("Enter payment amount: ");
  scanf("%f", &payment);

  rate = rate / 100.0f;

  first_payment = ((loan - payment) + (loan * (rate / 12)));
  printf("Balance remaining after first payment: %.2f\n", first_payment);
  second_payment = ((first_payment - payment) + (first_payment * (rate / 12)));
  printf("Balance remaining after second payment: %.2f\n", second_payment);
  third_payment = ((second_payment - payment) + (second_payment * (rate / 12)));
  printf("Balance remaining after third payment: %.2f\n", third_payment);
}
