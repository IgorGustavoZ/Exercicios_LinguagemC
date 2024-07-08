#include <stdio.h>
#include <stdlib.h>

int ex17(float altura1, int cresce1, float altura2, int cresce2)
{
    int anos=0;

    altura1*=100;
    altura2*=100;

    while(altura2<=altura1)
    {
        altura1 += cresce1;
        altura2 += cresce2;
        anos++;
    }
    return anos;
}

int main()
{
    int ano, ano1;
    float altura, altura1;
    printf("Digite a altura da 1 Pessoa: \n");
    scanf("%f", &altura);
    printf("Digite o quanto ela cresce p/ano: \n");
    scanf("%f", &ano);
    printf("Digite a altura da 2 Pessoa: \n");
    scanf("%f", &altura1);
    printf("Digite o quanto ela cresce p/ano: \n");
    scanf("%f", &ano1);
    printf("Para a Pessoa 2 ultrapassar a Pessoa 1 demorara %d anos.\n", ex17(altura, ano, altura1, ano1));
    return 0;
}
