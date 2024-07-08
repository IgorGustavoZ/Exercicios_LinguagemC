#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, soma;
    //usando For
    soma=0;
    for(cnt=1;cnt<=1000;cnt++)
    {
        if(cnt%5==0 || cnt%3==0) //fazendo inumeros testes, se algum for verdadeiro faz-se a soma.
           soma=soma+cnt;
    }
    printf("A soma de todos os multiplos de 5 e 3, abaixo de 1000 e: %d\n", soma);

    //usando While

    cnt=1;
    soma=0;
    while(cnt<=1000)
    {
        if(cnt%5==0 || cnt%3==0)
           soma=soma+cnt;
        cnt++;
    }
    printf("A soma de todos os multiplos de 5 e 3, abaixo de 1000 e: %d\n", soma);

    //Usando Do/While

    cnt=1;
    soma=0;
    do
    {
        if(cnt%5==0 || cnt%3==0)
           soma=soma+cnt;
        cnt++;
    }
    while(cnt<=1000);

    printf("A soma de todos os multiplos de 5 e 3, abaixo de 1000 e: %d\n", soma);
    return 0;
}
