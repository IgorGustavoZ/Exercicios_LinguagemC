#include <stdio.h>
#include <stdlib.h>

int ex04(int a, int b)
{
    int soma=0, cnt=0;
    do
    {
      soma=soma+cnt;
      cnt++;
    }
    while(cnt<=a || cnt<=b);
    return soma;
}


int main()
{
    int n1, n2;
    printf("Informe dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("O valor do intervalo e %d\n", ex04(n1, n2));
    system("pause");
    return 0;
}
