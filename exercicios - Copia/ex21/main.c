#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Digite seu numero em jardas: ");
    scanf("%f", &j);
    m=0.91*j;
    printf("Seu numero em metros e: %f\n", m);
    system("pause");
    return 0;
}
