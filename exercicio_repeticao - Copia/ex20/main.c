#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cnt, qtdPar, qtdNum;
    qtdPar=0;
    for (cnt=1;cnt<=999;cnt++)
    {
        printf("Digite um numero (Escreva 1000 para parar): \n");
        scanf("%d", &num);
        cnt=num;
        qtdNum=qtdNum+1;

        if (num%2==0)
            qtdPar=qtdPar+1;
    }
    printf("A quantidade de dadas lidos foi %d e a quantidade de numeros pares foi %d \n", qtdNum-1, qtdPar-1);

    system("pause");
    return 0;
}
