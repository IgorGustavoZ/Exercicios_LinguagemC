/*
    204026 Igor Gustavo Zerbinato
    204032 Gabriel Jurgensen de Souza
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplos, cnt;
    multiplos=3;
    for (cnt=1;cnt<=5;cnt++)
    {
        printf("%d x %d = %d \n", multiplos, cnt, multiplos*cnt);
    }
    printf("---------------------------------------------------\n");
    printf("##### FIM ###### \n");
    system("pause");
    return 0;
}
