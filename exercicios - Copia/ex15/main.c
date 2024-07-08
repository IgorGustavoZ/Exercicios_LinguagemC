#include <stdio.h>
#include <stdlib.h>

int main()
{
   const PI=3.14;
   float r, g;
   printf("Escreva seu angulo em radiano: ");
   scanf("%f", &r);
   g=r*180/PI;
   printf("Esse e seu numero em graus: %f\n", g);
   system("pause");
    return 0;
}
