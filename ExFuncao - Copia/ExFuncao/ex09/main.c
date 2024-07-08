#include <stdio.h>
#include <stdlib.h>
int ex09(int num)
{
    int soma=0,div=1;
    while (div<num)
    {
       if (num%div==0)soma=soma+div;
       div++;
    }
    if (soma==num)
        return 1;
    else if(soma!=num)
        return 0;
}
int main()
{
    int num;
    printf("Digite um numero : \n");
    scanf("%d", &num);
    if (ex09(num)==1)
        printf("Parabens! Seu numero e perfeito.\n");
    else
        printf("Seu numero nao e perfeito.\n");
    return 0;
}
