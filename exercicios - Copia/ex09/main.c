#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("Escreva seu numero graus Celsius: ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("Sua temperatura em Kelvin e: %f\n", K);
    system("pause");
    return 0;
}
