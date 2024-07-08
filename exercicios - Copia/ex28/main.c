#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,v3,soma;
    printf("Digite seu primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite seu segundo valor: ");
    scanf("%d", &v2);
    printf("Digite seu terceiro valor: ");
    scanf("%d", &v3);
    v1=v1*v1;
    v2=v2*v2;
    v3=v3*v3;
    soma=v1+v2+v3;
    printf("O valor do resultado do quadrado deles e: %d\n", soma);
    system("pause");
    return 0;
}
