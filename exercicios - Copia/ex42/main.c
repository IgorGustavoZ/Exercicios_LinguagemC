#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;
    float salariobase, salario1, salario2;
    printf("Informe o seu salario: ");
    scanf("%f", &salariobase);
    salario1=salariobase-(salariobase*0.07);
    salario2=salario1+(salariobase*0.05);
    printf("O valor a ser pago e: %f\n", salario2);
    system("pause");
    return 0;
}
