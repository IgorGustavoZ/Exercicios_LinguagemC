#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if (num<0)
    {
        if (num%3==0)
            printf("O numero %d e negativo e multiplo de 3! \n", num);
        else
            printf("O numero %d e negativo e nao e multiplo de 3! \n", num);
    }
    else
    {
        if (num%3==0)
            printf("O numero %d e positivo e multiplo de 3! \n", num);
        else
            printf("O numero %d e positivo e nao e multiplo de 3! \n", num);
    }
    system("pause");
    return 0;
}
