#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nsala, ncap, nalunos;
    printf("Digite o numero da sala: ");
    scanf("%d", &nsala);
    printf("Digite a capacidade de aluno na sala: ");
    scanf("%d", &ncap);
    printf("Digite o numero de alunos matriculados: ");
    scanf("%d", &nalunos);
    if (ncap>nalunos)
        printf("O numero da sala e %d e tem capacidade para %d alunos e nao esta lotada!\n", nsala,ncap);
    else if (ncap==nalunos)
        printf("O numero da sala e %d e tem capacidade para %d alunos e esta lotada!\n", nsala,ncap);
    else
        printf("Erro");
    system("pause");
    return 0;
}
