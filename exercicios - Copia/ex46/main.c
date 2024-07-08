#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, centena, dezena, unidade, numeroNovo;
    printf("Digite um numero de 111 a 999: ");
    scanf("%d", &numero);
    centena=numero%10;
    dezena=(numero%100)/10;
    unidade=numero/100;
    numeroNovo=centena*100+dezena*10+unidade;
    printf("Aqui esta o numero invertido: %d\n", numeroNovo);
    system("pause");
    return 0;
}
