#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Escreva seu numero graus Celsius: ");
    scanf("%f", &C);
    F = C*(9.0/5.0)+32.0;
    printf("Sua temperatura em Fahrenheit e: %f\n", F);
    system("pause");
    return 0;
}
