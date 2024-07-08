#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite o Coeficiente a, b, c: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    delta=(pow(b,2))-4*a*c;
        x1=(((-b)+(sqrt(delta))))/(2*a);
        x2=(((-b)-(sqrt(delta))))/(2*a);
    printf("O x1 e: %f\ne o x2 e: %f\n", x1,x2);
    system("pause");
    return 0;
}
