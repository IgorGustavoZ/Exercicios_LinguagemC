#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1,cat2,hip;
    printf("Digite o primeiro cateto: ");
    scanf("%f", &cat1);
    printf("Digite o segundo cateto: ");
    scanf("%f", &cat2);
    hip=(cat1*cat1)+(cat2*cat2);
    printf("A hipotenusa sera: %f\n", sqrt(hip));
    system("pause");
    return 0;
}
