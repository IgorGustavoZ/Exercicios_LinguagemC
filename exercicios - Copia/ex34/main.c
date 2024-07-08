#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, raio;
    const pi=3.14;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);
    a=(raio*raio)*pi;
    printf("A area do circulo e: %f\n", a);
    system("pause");
    return 0;
}
