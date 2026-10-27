#include <stdio.h>
int main()
{
    int A = 2, B = 3, C = 4;
    int D = 5, E = 2, F = 3, G = 2;
    int i = 5, J;

    printf("a = %d\n", A+B*C+(D*E)+F*G);
    printf("b = %d\n", A/B*C-B+A*D/3);
    printf("c = %d\n", A+++B---A);

    J = (i++) + (++i);
    printf("d = %d\n", J);

    return 0;
}