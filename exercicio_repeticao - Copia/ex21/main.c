/*
    204026 Igor Gustavo Zerbinato
    204032 Gabriel Jurgensen de Souza
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, impar, par, cnt;
    par=0;
    impar=1;
    printf("Usando FOR \n");
    for (cnt=1;cnt<=2;cnt++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num%2==0)
            par=par+num;
        if (num%2==1 || num==1)
            impar=impar*num;

    }
    if (par>0)
        printf("A soma dos pares e: %d \n", par);
    else if (impar>0)
        printf("A multiplicacao dos impares e: %d \n", impar);
    printf("Usando WHILE \n");

    impar=1;
    par=0;
    cnt=1;

    while(cnt<=2)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num%2==0)
            par=par+num;
        if (num%2==1 || num==1)
            impar=impar*num;
        cnt++;
    }
    if (par>0)
        printf("A soma dos pares e: %d \n", par);
    else if (impar>0)
        printf("A multiplicacao dos impares e: %d \n", impar);
    printf("Usando DO/WHILE \n");

    impar=1;
    par=0;
    cnt=1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num%2==0)
            par=par+num;
        if (num%2==1 || num==1)
            impar=impar*num;
        cnt++;
    }while(cnt<=2);
    if (par>0)
        printf("A soma dos pares e: %d \n", par);
    else if (impar>0)
        printf("A multiplicacao dos impares e: %d \n", impar);
    printf("Usando DO/WHILE \n");
    printf("FIM");
    system("pause");
    return 0;
}
