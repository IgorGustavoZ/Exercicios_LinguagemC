#include <stdio.h>
#include <stdlib.h>

float ex11(float r)
{
    float a, pi=3.14;
    return a=pi*(r*r);
}

int main()
{
    float raio;
    printf("Digite o raio do circulo : \n");
    scanf("%f", &raio);
    printf("A Area sera de : %0.2f\n", ex11(raio));
    return 0;
}
