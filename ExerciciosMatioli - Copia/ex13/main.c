#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, l3;
    printf("Digite o lado 1: \n");
    scanf("%f", &l1);
    printf("Digite o lado 2: \n");
    scanf("%f", &l2);
    printf("Digite o lado 3: \n");
    scanf("%f", &l3);
    if (l1==l2 && l1==l3 && l2==l3)
        printf("O seu triangulo e Equilatero! \n");
    if (l1==l2 || l1==l3 || l2==l3 && l1!=l2 || l1!=l3 || l2!=l3)
        printf("O seu triangulo e Isosceles! \n");
    if (l1!=l2 && l1!=l3 && l2!=l3)
        printf("O seu triangulo e Escaleno! \n");
    system("pause");
    return 0;
}
