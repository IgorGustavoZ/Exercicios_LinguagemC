#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Digite seu numero em metros: ");
    scanf("%f", &m);
    j=m/0.91;
    printf("Seu numero em jardas e: %f\n", j);
    system("pause");
    return 0;
}
