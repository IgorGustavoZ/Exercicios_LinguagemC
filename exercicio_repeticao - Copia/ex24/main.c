#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cnt, soma;
    //Usando For
    printf("Digite um numero: ");
    scanf("%d", &num);
    soma=0;
    for (cnt=1;cnt<=num;cnt++)
    {
        if (num%cnt==0 && cnt!=num) //o ultimo é para não somar o numero com o proprio numero, como pede na questão.
        {
            soma=soma+cnt;
        }

    }
    printf("A soma e: %d\n", soma);
    printf("Usando While \n");

    printf("Digite um numero: ");
    scanf("%d", &num);
    cnt=1;
    soma=0;
    while(cnt<=num)
    {
        if (num%cnt==0 && cnt!=num)
        {
            soma=soma+cnt;
        }
    cnt++;
    }
    printf("A soma e: %d\n", soma);

    printf("Usando Do/While \n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    cnt=1;
    soma=0;
    do
    {
        if (num%cnt==0 && cnt!=num)
        {
            soma=soma+cnt;
        }
    cnt++;
    }while(cnt<=num);
    printf("A soma e: %d\n", soma);
    system("pause");
}
