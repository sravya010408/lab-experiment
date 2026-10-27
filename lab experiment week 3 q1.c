#include <stdio.h>
#include <math.h>
int main()
{
    double n;

    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n < 0)
        printf("Square root of a negative number is not real.\n");
    else
        printf("Square root = %.2lf\n", sqrt(n));

    return 0;
}