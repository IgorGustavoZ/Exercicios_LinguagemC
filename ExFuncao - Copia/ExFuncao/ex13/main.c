#include <stdio.h>
#include <stdlib.h>

void ex13( int *num1 , int *num2 )
{
        int ref;
        ref = *num1;
        *num1 = *num2;
        *num2 = ref;
}

int main()
{
    int num1, num2;
    printf("Digite o A: \n");
    scanf("%d", &num1);
    printf("Digite o B: \n");
    scanf("%d", &num2);
    ex13(&num1,&num2);
    printf("Os valores trocados sao A : %d e B : %d\n", num1, num2);
    return 0;
}
