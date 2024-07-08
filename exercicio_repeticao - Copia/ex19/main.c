#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a1, a2, a3;
    printf("Digite um Numero entre 100 e 999: \n");
    scanf("%d", &num);
    a1=(num%100)%10;
    a2=(num%100)/10;
    a3=(num/100);
    printf("Algorismo 1: %d || Algorismo 2: %d || Algorismo 3: %d \n", a1,a2,a3);
    system("pause");
    return 0;
}
