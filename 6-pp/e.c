/* Calculates e to an accuracy defined by the user */
#include <stdio.h>

int main(void) {
  float e = 1.0f;
  int n, denom = 1;

  printf("Enter the number of denominator to use: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      denom *= j;
    }
    
    e += 1.0f/denom;
  }

  printf("e is: %.3f", e);

  return 0;
}
