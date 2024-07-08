#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degrau, altura;
    printf("Informe a altura do degrau: ");
    scanf("%d", &degrau);
    printf("Ate que degrau voce deseja subir: ");
    scanf("%d", &altura);
    altura=altura/degrau;
    printf("Voce devera subir %d degraus.\n", altura);
    system("pause");
    return 0;
}
