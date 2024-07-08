#include <stdio.h>
#include <stdlib.h>

int ex07(int a)
{
   int cnt=1, soma;
   while(cnt<=a)
   {
        soma=soma+(cnt/(2*cnt));
        cnt++;
   }

   return soma;
}
int main()
{
    int num;
    printf("Digite o N: \n");
    scanf("%d", &num);
    printf("A soma foi de : %d\n", ex07(num));
    return 0;
}
