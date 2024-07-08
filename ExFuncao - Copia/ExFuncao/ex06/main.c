#include <stdio.h>
#include <stdlib.h>

float ex06(int a, int b, int c, int d)
{
    float media;
    media=((c*a)+(d*b))/c+d;
    return media;
}
int main()
{
    int v1,v2,m1,m2;
    do
    {
        printf("Digite os valores: \n");
        scanf("%d", &v1);
        scanf("%d", &v2);
        printf("Digite os pesos: \n");
        scanf("%d", &m1);
        scanf("%d", &m2);
        system("cls");
        printf("O resultado da Media Ponderada e: %0.2f\n\n", ex06(v1,v2,m1,m2));
    }while(v1>1.0 || v2>1.0 || m1>1.0 || m2>1.0);

    system("pause");
    return 0;
}
