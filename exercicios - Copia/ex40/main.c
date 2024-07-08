#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    float quantia, quantia2;
    printf("Informe os dias: ");
    scanf("%d", &dia);
    quantia=dia*30;
    quantia2=quantia*0.92;
    printf("O valor liquida a ser paga e: %f\n", quantia2);
    system("pause");
    return 0;
}
