#include <stdio.h>
#include <stdlib.h>

float ex02(float fahrenheit)
{
    float c;
    c=5.0*(fahrenheit-32.0)/9.0;
    return c;
}

int main()
{
    int valor;
    printf("Digite um valor em Farenheit: \n");
    scanf("%f", &valor);

    printf("Fahrenheit = %0.2f Centigrados\n",
           ex02(valor));
    return 0;
}
