#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    n1=0;
    printf("Digite seu numero: ");
    scanf("%f", &n1);
    n1=n1*n1;
    printf("Seu numero em quadrado e: %f\n", n1);
    system("pause");
    return 0;
}
