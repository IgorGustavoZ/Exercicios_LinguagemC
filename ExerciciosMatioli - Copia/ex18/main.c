#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if (num<0.0)
    {
        if (num%2==0)
            printf("Seu numero e negativo e par! \n");
        else
            printf("Seu numero e negativo e impar! \n");
    }
    else if (num>=0)
    {
        if (num%2==0)
            printf("Seu numero e positivo e par! \n");
        else
            printf("Seu numero e positivo e impar! \n");
    }
    system("pause");
    return 0;
}
