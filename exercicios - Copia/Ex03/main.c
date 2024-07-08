#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, soma;
    soma=0;
    printf("Digite seu primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite seu segundo valor: ");
    scanf("%d", &n2);
    printf("Digite seu terceiro valor: ");
    scanf("%d", &n3);
    soma=n1+n2+n3;
    printf("A soma de todos os numeros e: %d\n", soma);
    system("pause");
    return 0;
}
