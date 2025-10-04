#include <stdio.h>

int main()
{
    float a, b;
    printf("*****(US2/amadou) - soustraction*****\n");

    printf("Entrer le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrer le deuxième nombre (b) : ");
    scanf("%f", &b);

    printf("La soustraction de %.2f et %.2f = %.2f\n", a, b, a - b);

    return 0;
}
