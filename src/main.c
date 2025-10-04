#include <stdio.h>

int main()
{
    float a, b;
    printf("*****(US3/amadou) - multiplication*****\n");

    printf("Entrer le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrer le deuxième nombre (b) : ");
    scanf("%f", &b);

    printf("La multiplication de %.2f et %.2f = %.2f\n", a, b, a * b);

    return 0;
}
