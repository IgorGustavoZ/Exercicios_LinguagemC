#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Digite o numero 1: \n");
    scanf("%d", &n1);
    printf("Digite o numero 2: \n");
    scanf("%d", &n2);
    printf("Digite o numero 3: \n");
    scanf("%d", &n3);
    if (n1>n2 && n1>n3)
        printf("O maior numero e o numero 1! \n");
    else if (n2>n1 && n2>n3)
        printf("O maior numero e o numero 2! \n");
    else if (n3>n2 && n3>n1)
        printf("O maior numero e o numero 3! \n");
    system("pause");
    return 0;
}
