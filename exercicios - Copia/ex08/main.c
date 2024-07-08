#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("Escreva seu numero graus Kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    printf("Sua temperatura em Celsius e: %f\n", C);
    system("pause");
    return 0;
}
