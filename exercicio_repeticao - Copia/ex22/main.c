/*
    204026 Igor Gustavo Zerbinato
    204032 Gabriel Jurgensen de Souza
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, ndenotas, cnt, num;
    float media;
    printf("Usando FOR \n");
    nota=0;
    ndenotas=0;
    printf("Digite seu Nota: ");
    scanf("%d", &num);
    for (cnt=1;num>=10 && num<=20;cnt++)
    {
        printf("Digite sua Nota: ");
        scanf("%d", &num);

        if (num<10 || num>20)
            printf("Sua media e: %f\n", media=nota/ndenotas);
        else
            nota=nota+num;
            ndenotas=ndenotas+1;
    }
    printf("Usando WHILE \n");

    nota=0;
    ndenotas=0;
    cnt=1;

    printf("Digite seu Nota: ");
    scanf("%d", &num);
    while(num>=10 && cnt<=20)
    {
        printf("Digite sua Nota: ");
        scanf("%d", &num);

        if (num<10 || num>20)
            printf("Sua media e: %f\n", media=nota/ndenotas);
        else
            nota=nota+num;
            ndenotas=ndenotas+1;
        cnt++;
    }
    printf("Usando DO/WHILE \n");

    nota=0;
    ndenotas=0;
    cnt=1;

    printf("Digite seu Nota: ");
    scanf("%d", &num);
    do
    {
        printf("Digite sua Nota: ");
        scanf("%d", &num);

        if (num<10 || num>20)
            printf("Sua media e: %f\n", media=nota/ndenotas);
        else
            nota=nota+num;
            ndenotas=ndenotas+1;
        cnt++;
    }while(num>=10 && cnt<=20);
    printf("FIM");
    system("pause");
    return 0;
}
