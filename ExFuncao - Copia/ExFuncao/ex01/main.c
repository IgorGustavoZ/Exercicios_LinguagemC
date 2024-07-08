#include <stdio.h>
#include <stdlib.h>

int ex01(int a, int b, int c)
{
    int soma;
    do
    {
      if(a%c==0) soma++;
      a--;
    }
    while(1>=a);
    do
    {
      if(b%c==0) soma++;
      b--;
    }
    while(1>=b);
    return soma;
}
int main()
{
    int v1, v2, v3, resultado;
    printf("Digite 2 valores: \n");
    scanf("%d", &v1);
    scanf("%d", &v2);
    printf("Digite o 3o valor: ");
    scanf("%d", &v3);
    printf("Resultado: %d\n", ex01(v1, v2, v3));
    return 0;
}
