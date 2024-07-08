#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[]={1,2,3};
    int cnt, resultado;
    resultado=todosDiferentes(v1, 3);
    if(resultado==1)
    {
        printf("Seu numeros nao sao diferentes! \n");
    }
    else if(resultado==0)
    {
        printf("Seu numero sao diferentes! \n");
    }
    return 0;
}
