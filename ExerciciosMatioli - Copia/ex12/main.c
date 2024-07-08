#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarionovo;
    printf("Digite seu salario: \n");
    scanf("%f", &salario);
    if (salario<=300.0)
        printf ("O novo salario sera de: %f\n", salarionovo=salario*1.5);
    else
        printf ("O novo salario sera de: %f\n", salarionovo=salario*1.3);
    system("pause");
    return 0;
}
