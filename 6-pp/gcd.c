/* Uses Euclid's algorithm to find the GCD */
#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    if (n > m) {
        remainder = m;
        m = n;
        n = remainder;
    }

    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
