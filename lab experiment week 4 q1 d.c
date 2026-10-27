#include <stdio.h>
int main()
{
    int A = 2, B = 3;
    int i = 5, J;

    printf("A+B = %d\n", A+B);

    J = i++;
    printf("Post-increment J = %d, i = %d\n", J, i);

    J = ++i;
    printf("Pre-increment J = %d, i = %d\n", J, i);

    return 0;
}