/* Calculates e to an accuracy defined by the user */
#include <stdio.h>

int main(void) {
  float e = 1.0f, n, term = 100.0f;
  int denom = 1, i = 1;

  printf("Enter the number of the smalles term to use: ");
  scanf("%f", &n);

  while (term > n) {
    for (int j = 1; j <= i; j++) {
      denom *= j;
    }
    term = 1.0f / denom;

    e += term;
    i++;
  }

  printf("e is: %.3f", e);

  return 0;
}
