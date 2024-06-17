/* format data input by user */
#include <stdio.h>

int main(void) {
  int itemNum, day, month, year;
  float unitPrice;

  printf("Enter item number: ");
  scanf("%d", &itemNum);
  printf("Enter unit price: ");
  scanf("%f", &unitPrice);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%d\t$%6.2f\t%.2d/%.2d/%.2d\n", itemNum, unitPrice, month, day, year);

  return 0;
}
