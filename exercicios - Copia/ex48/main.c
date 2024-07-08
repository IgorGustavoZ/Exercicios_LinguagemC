#include <stdio.h>
#include <stdlib.h>

int main()
{
    float seg, min, hor;
    printf("Digite o valor em segundos: ");
    scanf("%f", &seg);
    min=seg/60.0;
    hor=seg/3600.0;
    printf("O valor em segundos e: %f\nO valor em minutos e: %f\nO valor em horas e: %f\n", seg, min, hor);
    system("pause");
    return 0;
}
