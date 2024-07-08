#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real,dolar;
    printf("Digite seu valor em Real: ");
    scanf("%f", &real);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &dolar);
    dolar=real/dolar;
    printf("Seu valor em Dolar e: %f\n", dolar);
    system("pause");
    return 0;
}
