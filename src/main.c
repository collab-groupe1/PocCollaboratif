#include <stdio.h>

int main()
{
    float a, b;
    printf("*****(US1/amadou) - addition*****\n");

    printf("Entrer le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrer le deuxième nombre (b) : ");
    scanf("%f", &b);

    printf("La somme de %.2f et %.2f = %.2f\n", a, b, a + b);

    return 0;
}
