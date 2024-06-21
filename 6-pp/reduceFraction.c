/* Uses Euclid's algorithm to find the GCD then reduces a fraction */
#include <stdio.h>

int main(void)
{
    int m, n, numerator, denominator, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    if (numerator > denominator) {
        m = numerator;
        n = denominator;
    } else {
        m = denominator;
        n = numerator;
    }

    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numerator /= m;
    denominator /= m;

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
