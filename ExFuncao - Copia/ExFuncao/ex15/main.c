#include <stdio.h>
#include <stdlib.h>
const pi=3.14;
void ex15(float raio, float *perimetro, float *area)
{
   *area=(raio*raio)*pi;
   *perimetro=(2*pi)*raio;
}

int main()
{
    float raio, perimetro, area;
    printf("Digite o raio: \n");
    scanf("%f", &raio);
    ex15(raio, &perimetro, &area);
    printf("Area = %0.2f | Perimetro = %0.2f", area, perimetro);
    return 0;
}
