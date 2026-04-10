//Compute Power Using Recursion
#include <stdio.h>
int main()
{
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int power = 1;
    for (int i = 0; i < exponent; i++) {
        power *= base;
    }

    printf("%d raised to the power of %d is: %d\n", base, exponent, power);
    return 0;
}