#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,m;
    printf("Digite seu numero em acres: ");
    scanf("%f", &a);
    m=a*4048.58;
    printf("Seu numero em metros quadrados e: %f\n", m);
    system("pause");
    return 0;
}
