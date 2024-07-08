#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia, ano;
    printf("Digite seu ano: ");
    scanf("%d", &ano);
    printf("Digite seu mes: ");
    scanf("%d", &mes);
    dia=(mes*30)+(ano*365);
    printf("Seu numero de dias e: %d", dia);
    system("pause");
    return 0;
}
