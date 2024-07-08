#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, tipo;
    float preco, desconto;
    printf("Que dia da semana voce esta comprando (domingo 1 / segunda 2 / terca 3 / quarta 4 / quinta 5 / sexta 6 / sabado 7)?");
    scanf("%d", &dia);
    printf("E lancamento (1) ou comum (2)?");
    scanf("%d", &tipo);
    printf("Qual e o preco da fita?");
    scanf("%f", &preco);
    if (dia==2 || dia==3 || dia==5)
    {
        if (tipo==1)
        printf("O valor e: %f\n", desconto=preco*0.45);
        else
        printf("O valor e: %f\n", desconto=preco*0.6);
    }
    else if (dia==4 || dia==6 || dia==7 || dia==1)
    {
        if (tipo==1)
        printf("O valor e: %f\n", desconto=preco*1.15);
        else
        printf("O valor e: %f\n", preco);
    }
    system("pause");
    return 0;
}
