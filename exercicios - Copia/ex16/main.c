#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c, p;
   printf("Escreva seu numero em polegadas: ");
   scanf("%f", &p);
   c=p*2.54;
   printf("Esse e seu numero em centimetros: %f\n", c);
   system("pause");
    return 0;
}
