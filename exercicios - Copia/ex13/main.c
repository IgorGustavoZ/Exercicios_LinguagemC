#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m, k;
    printf("Escreva seu numero em km: ");
    scanf("%f", &k);
    m=k/1.61;
    printf("Seu numero em km em milhas e: %f\n", m);
    system("pause");

    return 0;
}
