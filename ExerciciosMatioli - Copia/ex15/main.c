#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, n1, n2, n3;
    printf("Digite a nota 1: \n");
    scanf("%f", &n1);
    printf("Digite a nota 2: \n");
    scanf("%f", &n2);
    printf("Digite a nota 3: \n");
    scanf("%f", &n3);
    media=(n1+n2+n3)/3;
    if (media>=6.0)
        printf("Aprovado! \n");
    else if (media<6.0)
        printf("Reprovado ;/ \n");
    system("pause");
    return 0;
}
