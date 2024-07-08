#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,c;
    printf("Digite seu numero em centimetros: ");
    scanf("%f", &c);
    p=c/2.51;
    printf("Seu numero em polegadas e: %f\n", p);
    system("pause");
    return 0;
}
