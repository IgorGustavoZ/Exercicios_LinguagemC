#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, psideal;
    char sexo[10];
    printf("Digite seu sexo (M|F): ");
    scanf("%s", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &h);
    if (strcmp(sexo,"M")==0)
        printf("Seu peso ideal e: %f\n", psideal=floor((72.7*h)-58));
    else if (strcmp(sexo,"F")==0)
        printf("Seu peso ideal e: %f\n", psideal=floor((62.1*h)-44.7));
    system("pause");
}
