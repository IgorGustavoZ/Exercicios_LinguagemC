#include <stdio.h>
#include <stdlib.h>

float ex05(int v)
{
    float cnt=1, raiz, soma;
    do
    {
        soma=soma+cnt;
        raiz++;
        cnt+=2;
    }while(soma<=v);
    return(raiz-1);
}


int main()
{
    float num;
    do
    {
    printf("Digite o valor para Raiz Quadrada: \n");
    scanf("%f", &num);
    printf("O valor aproximado da Raiz Quadrada e: %0.2f\n", ex05(num));
    }
    while(num>0);
    system("cls");
    printf("FIM \n");
    system("pause");
    return 0;
}
