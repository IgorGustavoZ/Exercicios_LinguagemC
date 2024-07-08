#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Escreva seu numero graus Fahrenheit: ");
    scanf("%f", &F);
    C=5*(F-32)/9;
    printf("Sua temperatura em Celsius e: %f\n", C);
    system("pause");
    return 0;
}
