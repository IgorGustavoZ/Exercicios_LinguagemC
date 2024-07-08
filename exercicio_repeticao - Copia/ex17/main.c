#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, num, soma;
    soma=0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    for (cnt=1;cnt<=num;cnt++)
        soma=soma+cnt;
    printf("A soma e de: %d \n", soma);
    printf("FIM \n");
    system("pause");
    return 0;
}
