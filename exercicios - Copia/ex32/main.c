#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ant, suc, soma;
    printf("Digite seu numero: ");
    scanf("%d", &n);
    ant=(n*n)-1;
    suc=(n*n*n)+1;
    soma=ant+suc;
    printf("A soma foi: %d\n", soma);
    system("pause");
    return 0;
}
