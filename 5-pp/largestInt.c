/* Finds the largest of 4 integers */
#include <stdio.h>

int main(void)
{
  int i, j, k, l, smallest, largest, smallest2, largest2;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &i, &j, &k, &l);

  if (i > j) {
    smallest = j;
    largest = i;
  } else {
    smallest = i;
    largest = j;
  }

  if (k > l) {
    smallest2 = l;
    largest2 = k;
  } else {
    smallest2 = k;
    largest2 = l;
  }

  if (largest2 > largest) {
    largest = largest2;
  }

  if (smallest2 < smallest) {
    smallest = smallest2;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
