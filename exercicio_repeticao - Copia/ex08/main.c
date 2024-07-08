#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numero, maior, menor;
 int i;

 printf("Entre com o 1o numero inteiro: ");
 scanf("%d", &numero);

 maior=numero;
 menor=numero;

 for(i=1; i<10; i++)
 {
 printf("\nEntre com o %do numero inteiro: ",i+1);
 scanf("%d", &numero);

 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }


 printf("\nO menor numero entrado e: %d", menor);
 printf("\nO maior numero entrado e: %d", maior);

 return 0;
}
