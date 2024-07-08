#include <stdio.h>
#include <stdlib.h>
float ex10(float a, float b)
{
  if (a<20)return b*0.10;
  else if(a>=20 && a<50)return b*0.15;
  else if(a>=50 && a<75)return b*0.20;
  else if(a>=75)return b*0.25;
}
int main()
{
    float nvendas, ntotal;
    printf("Escreva o numero de Vendas: \n");
    scanf("%f", &nvendas);
    printf("Escreva o total obtido nas Vendas: \n");
    scanf("%f", &ntotal);
    printf("A comissao a ser paga sera de %0.2f reias \n", ex10(nvendas,ntotal));
    return 0;
}
