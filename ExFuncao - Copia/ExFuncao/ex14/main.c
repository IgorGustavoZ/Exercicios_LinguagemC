#include <stdio.h>
#include <stdlib.h>

void ex14(int * a, int * b)
{
    *a--;
    *b++;
}

int main()
{
    int num1, num2;
    printf("Receba o primeiro parametro: \n");
    scanf("%d", &num1);
    printf("Receba o segundo parametro: \n");
    scanf("%d", &num2);
    ex14(&num1,&num2);
    printf("O Primeiro incrementado: %d e o Segundo decrementado: %d\n", num1, num2);
    return 0;
}
