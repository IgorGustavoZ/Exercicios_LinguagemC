#include <stdio.h>
#include <stdlib.h>

int ex16(int n)
{
    int i=1, obs;
    while(i<=n)
    {
        if(i<=2)
            printf("1\n");
        else if(i>=2)
        {
           obs=obs-1+obs-2;
           printf("%d\n", i);
        }
        i++;
        obs=i;
    }
}

int main()
{
    int nElementos;
    printf("Digite o numero de Elemento: \n");
    scanf("%d", &nElementos);
    ex16(nElementos);
    return 0;
}
