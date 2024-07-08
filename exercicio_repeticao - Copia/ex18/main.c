#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maiorNum, quant, cnt;
    printf("Escreva quantas vezes sera lido: ");
    scanf("%d", &quant);
    quant=quant-1;
    printf("Digite um numero: ");
    scanf("%d", &maiorNum);
    for (cnt=1;cnt<=quant;cnt++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
        if (num>maiorNum)
            num=maiorNum;

    printf("O maior numero foi %d e foi lido %d numeros! \n", maiorNum,quant+1);
    system("pause");
    return 0;
}
