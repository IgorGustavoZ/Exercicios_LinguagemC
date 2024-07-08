#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,media;
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    printf("Digite sua quarta nota: ");
    scanf("%f", &n4);
    media=(n1+n2+n3+n4)/4.0;
    printf("Sua media total e: %f", media);
    system("pause");
    return 0;
}
