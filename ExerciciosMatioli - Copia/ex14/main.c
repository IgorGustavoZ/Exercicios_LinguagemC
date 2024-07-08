#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite seu A: \n");
    scanf("%f", &a);
    printf("Digite o B: \n");
    scanf("%f", &b);
    printf("Digite o C: \n");
    scanf("%f", &c);
    if (pow(a,2)==pow(b,2)+pow(c,2))
        printf("Seu triangulo e Retangulo! \n");
    else if (pow(a,2)>pow(b,2)+pow(c,2))
        printf("Seu triangulo e Obtuso (Obtusangulo)! \n");
    else if (pow(a,2)<pow(b,2)+pow(c,2))
        printf("Seu triangulo e Agudo (Acutangulo)! \n");
    system("pause");
    return 0;
}
