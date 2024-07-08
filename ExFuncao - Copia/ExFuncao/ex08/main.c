#include <stdio.h>
#include <stdlib.h>

int ex08(int a, int b)
{
    int mult=0, soma=0, cnt=1;
    while (cnt<=a)
    {
        soma+=b;
        mult=mult+soma;
        cnt++;
        soma=0;
    }
  return mult;
}


int main()
{
    int n1, n2;
    printf("Digite o valor 1 : \n");
    scanf("%d", &n1);
    printf("Digite o valor 2 : \n");
    scanf("%d", &n2);
    printf("O resultado da Multiplicacao entre eles e : %d\n", ex08(n1, n2));
    return 0;
}
