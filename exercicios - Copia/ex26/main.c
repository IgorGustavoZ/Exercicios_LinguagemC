#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,m;
    printf("Digite seu numero em metros: ");
    scanf("%f", &m);
    h=m*0.0001;
    printf("Seu numero em hectares: %f\n", h);
    system("pause");
    return 0;
}
