#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salario2;
    printf("Informe o salario: ");
    scanf("%f", &salario);
    salario2=salario*1.25;
    printf("O valor com desconto e: %f\n", salario2);
    system("pause");
    return 0;
}
