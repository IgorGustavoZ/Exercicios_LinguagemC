#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tipo[10];
    float n1,n2,n3,media;
    printf("Digite as notas 1, 2 e 3: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("Voce deseja usar media Aritmetica, Ponderada ou Harmonica? \n");
    scanf("%s", &tipo);
    if (strcmp(tipo,"aritmetica")==0)
        printf("A media sera de %f\n", media=(n1+n2+n3)/3);
    else if (strcmp(tipo,"ponderada")==0)
        printf("A media sera de %f\n", media=((3*n1)+(3*n2)+(4*n3))/10);
    else if (strcmp(tipo,"harmonica")==0)
        printf("a media sera de %f\n", media=3/(1/n1)+(1/n2)+(1/n3));
    system("pause");
}
