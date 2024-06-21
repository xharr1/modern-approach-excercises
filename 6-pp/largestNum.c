/* Finds the largest number entered */
#include <stdio.h>

int main(void)
{
    float n, largest;

    printf("Enter a number: ");
    scanf("%f", &n);
    largest = n;

    while (n > 0) {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > largest) {
            largest = n;
        }
    }

    printf("\nThe largest number entered was %.4f\n", largest);

    return 0;
}
