#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, r, h;
    const pi=3.14;
    printf("Informe o raio: ");
    scanf("%f", &r);
    printf("Informe a altura: ");
    scanf("%f", &h);
    v=pi*(r*r)*h;
    printf("O volume e: %f\n", v);
    system("pause");
    return 0;
}
