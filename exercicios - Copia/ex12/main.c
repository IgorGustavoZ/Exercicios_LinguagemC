#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,m;
    printf("Escreva seu numero em milhas: ");
    scanf("%f", &m);
    k=1.61*m;
    printf("Sua velocidade em km e: %f\n", k);
    system("pause");
    return 0;
}
