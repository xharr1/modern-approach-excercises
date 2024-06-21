// Calculates the balance of the loan after 3 payments
#include <stdio.h>

int main(void) {
  float loan, rate, payment, temp;
  int num_payments;

  printf("Enter the loan amount: ");
  scanf("%f", &loan);
  printf("Enter the interest rate: ");
  scanf("%f", &rate);
  printf("Enter payment amount: ");
  scanf("%f", &payment);
  printf("Enter the number of payments: ");
  scanf("%d", &num_payments);

  rate = rate / 100.0f;

  temp = ((loan - payment) + (loan * (rate / 12)));
  for (int i = 1; i <= num_payments; i++) {
    printf("Balance remaining after %d payment(s): %.2f\n", i, temp);
    temp = ((temp - payment) + (temp * (rate / 12)));
  }

  return 0;
}
