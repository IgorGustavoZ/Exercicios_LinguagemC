#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,soma;
    printf("Digite seu primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite seu segundo numero: ");
    scanf("%d", &n2);
    printf("Digite seu terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite seu quarto numero: ");
    scanf("%d", &n4);
    if(n1>n2&&n1>n3&&n1>n4)
        printf("A soma e: %d\n", soma=n2+n3+n4);
    if(n4>n1&&n4>n2&&n4>n3)
        printf("A soma e: %d\n", soma=n2+n3+n4);
    if(n2>n3&&n2>n1&&n2>n4)
        printf("A soma e: %d\n", soma=n1+n3+n4);
    if(n3>n1&&n3>n2&&n3>n4)
        printf("A soma e: %d\n", soma=n2+n1+n4);
    system("pause");
    return 0;
}
