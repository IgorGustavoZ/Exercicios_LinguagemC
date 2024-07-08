#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   const PI=3.14;
   float r, g;
   printf("Escreva seu angulo em graus: ");
   scanf("%f", &g);
   r=g*PI/180;
   printf("Esse e seu numero em radiano: %f\n", r);
   system("pause");
   return 0;
}
