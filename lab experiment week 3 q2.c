#include <stdio.h>
#include <math.h>
int main()
{
    double p, r, t, amount, ci;

    printf("Enter principal, rate and time: ");
    scanf("%lf%lf%lf", &p, &r, &t);

    amount = p * pow(1 + r / 100, t);
    ci = amount - p;

    printf("Amount = %.2lf\n", amount);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}