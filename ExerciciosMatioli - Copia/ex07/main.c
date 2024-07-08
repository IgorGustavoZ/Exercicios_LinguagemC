#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nsalariomin;
    float salario, imposto;
    printf("Digite seu salario: ");
    scanf("%d", &nsalariomin);
    salario=nsalariomin*1412;
    if(nsalariomin<=5)
        printf("Voce nao precisa pagar imposto de renda.\n");

    else if(nsalariomin>5 && nsalariomin<12)
    {
        imposto=salario*0.12;
        printf("Voce pagara um imposto de R$%f\n", imposto);
    }

    else if(nsalariomin>=12)
    {
        imposto=salario*0.24;
        printf("Voce pagara um imposto de R$%f\n", imposto);
    }

    system("pause");
    return 0;
}
