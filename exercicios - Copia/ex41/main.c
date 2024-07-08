#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;
    float salario, quantia, quantia2;
    printf("Informe as hora de trabalho(reais): ");
    scanf("%f", &salario);
    printf("Informe as horas trabalhadas: ");
    scanf("%d", &hora);
    quantia=hora*salario;
    quantia2=quantia*1.10;
    printf("O valor a ser pago e: %f\n", quantia2);
    system("pause");
    return 0;
}
