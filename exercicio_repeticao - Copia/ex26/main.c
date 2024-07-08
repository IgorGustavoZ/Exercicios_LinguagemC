#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    //usando For

    printf("Digite um numero: \n");
        scanf("%d", &num);
    for(num; num%11!=0 && num%13!=0 && num%17!=0 ;num--) //usando o Num na estrutura de repeticão, e fazendo varios testes e se algum der errado, ele para.
    {

    }
    printf("%d\n", num);

    //Usando While

    printf("Digite um numero: \n");
        scanf("%d", &num);
    while( num%11!=0 && num%13!=0 && num%17!=0 )
    {
        num--;
    }
    printf("%d\n", num);

    //usando Do/While

    printf("Digite um numero: \n");
        scanf("%d", &num);
    do
    {
        num--;
    }
    while(num%11!=0 && num%13!=0 && num%17!=0);
    printf("%d\n", num);

    system("pause");
    return 0;
}
