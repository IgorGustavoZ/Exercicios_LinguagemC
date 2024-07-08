/*
    204026 Igor Gustavo Zerbinato
    204032 Gabriel Jurgensen de Souza
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt;
    for (cnt=0; cnt<=100000; cnt+= 1000)
    {
        printf("%d \n", cnt);
    }
    printf("!! FIM !!\n");
    system("pause");
    return 0;
}
