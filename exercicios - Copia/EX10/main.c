#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,m;
    printf("Escreva seu numero em km|h: ");
    scanf("%f", &k);
    m = k/3.6;
    printf("Sua velocidade em m|s e: %f\n", m);
    system("pause");
    return 0;
}
