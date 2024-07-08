#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float n1, n2, n3, media;
    printf("Digite seu codigo: \n");
    scanf("%d", &cod);
    printf("Digite sua maior nota: \n");
    scanf("%f", &n1);
    printf("Digite as demais notas: \n");
    scanf("%f", &n2);
    scanf("%f", &n3);
    media=((4*n1)+(3*n2)+(3*n3))/10;
    if (media>=5.0)
        printf("O aluno de codigo %d, teve uma media de %f e foi Aprovado! \n", cod, media);
    else
        printf("O aluno de codigo %d, teve uma media de %f e foi Reprovado. \n", cod, media);
    system("pause");
    return 0;
}
