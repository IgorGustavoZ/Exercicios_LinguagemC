#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,m;
    printf("Digite seu numero em metros quadrados: ");
    scanf("%f", &m);
    a=m*0.000247;
    printf("Seu numero em acres e: %f\n", a);
    system("pause");
    return 0;
}
