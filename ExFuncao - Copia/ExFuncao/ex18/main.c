#include <stdio.h>
#include <stdlib.h>

int ex18(float x, float y, float z)
{
    if(x==y && x==z && x==y)return 1;
    else if(x!=y && x!=z && y!=z)return 3;
    else return 2;
}

int main()
{
    int l1,l2,l3, result;
    printf("Digite os 3 lados do Triangulo: \n");
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);
    result=ex18(l1,l2,l3);
    if(result==1)printf("Seu triangulo e Equilatero. \n");
    else if(result==2)printf("Seu triangulo e Isosceles. \n");
    else if(result==3)printf("Seu triangulo e Escaleno. \n");
    return 0;
}
