#include <stdio.h>
#include <stdlib.h>

int main()
{
    float desc, v1;
    printf("Informe o valor: ");
    scanf("%f", &v1);
    desc=v1*0.12;
    printf("O valor com desconto e: %f\n", desc);
    system("pause");
    return 0;
}
