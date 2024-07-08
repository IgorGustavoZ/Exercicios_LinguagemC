#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const pi=3.14;
    float altura, raio, area, volume;
    char tipo[10];
    printf("Digite o tipo da figura: \n");
    scanf("%s", &tipo);
    printf("Digite a altura da figura: ");
    scanf("%f", &altura);
    printf("Digite o raio da figura: ");
    scanf("%f", &raio);
    if (strcmp(tipo,"cone")==0)
    {
        volume=((pi*pow(raio,2)) * altura) / 3;
        area=(pi * raio)*sqrt((pow(raio,2))+pow(altura,2));
        printf("Area %f \nVolume %f\n", volume, area);
    }
    else if (strcmp(tipo,"cilindro")==0)
    {
        volume=((pi*pow(raio,2))*altura);
        area=(2*pi)*(raio*altura);
        printf("Area %f \nVolume %f\n", volume, area);
    }
    else if (strcmp(tipo,"esfera")==0)
    {
        volume=(pi*4*pow(raio,3)/3);
        area=(4*(pi*pow(raio,2)));
        printf("Area %f \nVolume %f\n", volume, area);
    }
    system("pause");
    return 0;
}
