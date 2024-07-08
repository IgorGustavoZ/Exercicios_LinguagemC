#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, numeroNovo, d1, d2, d3, d4;
    printf("Digite um numero de 1000 a 9999: ");
    scanf("%d", &numero);
    d1=numero/1000;
    d2=(numero%1000)/100;
    d3=(numero%100)/10;
    d4=numero%10;
    printf("Digito 1: %d\nDigito 2: %d\nDigito 3: %d\nDigito 4: %d\n", d1, d2, d3, d4);
    system("pause");
    return 0;
}
