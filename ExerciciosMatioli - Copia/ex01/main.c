#include <stdio.h>
#include <stdlib.h>
/*
    Por Igor Gustavo Zerbito | 1TDSMN
    Exercicios Matioli
*/

int main()
{
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n%3==0 || n%5==0)
        printf("Seu numero e divisivel por 5 ou 3\n");
    else
        printf("Seu numero nao e divisivel por 5 ou 3\n");
    system("pause");
    return 0;
}
