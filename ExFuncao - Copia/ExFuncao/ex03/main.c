#include <stdio.h>
#include <stdlib.h>

int ex03(int valor)
{
    int cnt=2;
    do
    {
      if (valor%cnt==0) return 1;
        else return 0;
        cnt++;
    }
    while (cnt<valor);
}




int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if(ex03(num)==1) printf("Seu valor nao e primo. \n");
    else if(ex03(num)==0) printf("Seu valor e primo! \n");
    system("pause");
    return 0;
}
