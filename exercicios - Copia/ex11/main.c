#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,m;
    printf("Escreva seu numero em m|s: ");
    scanf("%f", &m);
    k = m*3.6;
    printf("Sua velocidade em km|h e: %f\n", k);
    system("pause");
    return 0;
}
