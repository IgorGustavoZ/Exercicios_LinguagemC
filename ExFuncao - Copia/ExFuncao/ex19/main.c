#include <stdio.h>
#include <stdlib.h>

float ex19(float a, float b, float c, char d)
{
    float media;
    if (d == 'A' )media=(a+b+c)/3;
    else if (d == 'P' )media=(5*a+3*b+2*c)/10;
    else if (d == 'H')media=3/(1/a+1/b+1/c);
    return media;
}

int main()
{
    char tipo;
    float n1, n2, n3;
    printf("Digite o tipo (A, P ou H): ");
    scanf("%c", &tipo);
    printf("Digite as 3 notas e o tipo: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("Media = %0.2f\n", ex19(n1,n2,n3,tipo));
    return 0;
}
