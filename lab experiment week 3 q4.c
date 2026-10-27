#include <stdio.h>
int main()
{
    float u, a, t, s;

    printf("Enter initial velocity, acceleration and time: ");
    scanf("%f%f%f", &u, &a, &t);

    s = u * t + 0.5 * a * t * t;

    printf("Distance = %.2f\n", s);

    return 0;
}