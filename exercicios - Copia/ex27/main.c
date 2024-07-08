#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,m;
    printf("Digite seu numero em hectares: ");
    scanf("%f", &h);
    m=h*10000;
    printf("Seu numero em metros: %f\n", m);
    system("pause");
    return 0;
}
