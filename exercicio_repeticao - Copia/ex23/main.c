#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cnt;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (cnt=1;cnt<=num;cnt++)
    {
        if (num%cnt==0) //fazendo os testes com os divisores de 1 ate o numero dado
            printf("%d\n", cnt);
    }
    printf("Com While \n");

    printf("Digite um numero: ");
    scanf("%d", &num);
    cnt=1;
    while(cnt<=num)
    {
        if (num%cnt==0)
            printf("%d\n", cnt);
        cnt++;
    }
    printf("Com Do/While \n");

    printf("Digite um numero: ");
    scanf("%d", &num);
    cnt=1;
    do
    {
        if (num%cnt==0)
            printf("%d\n", cnt);
        cnt++;
    }while(cnt<=num);
    system("pause");
    return 0;
}
