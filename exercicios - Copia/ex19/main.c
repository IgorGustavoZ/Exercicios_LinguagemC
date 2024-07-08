#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,l;
    printf("Digite seu numero em litros: ");
    scanf("%f", &l);
    m=l/1000;
    printf("Seu numero em m3 e: %f\n", m);
    system("pause");
    return 0;
}
