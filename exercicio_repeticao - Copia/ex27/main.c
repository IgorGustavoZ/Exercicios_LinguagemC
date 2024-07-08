#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, num;

    //usando For

    printf("Defina o N: \n");
    scanf("%f", &num);
    for(num;num>=1;num--) //Vai diminuindo.
    {
    h=h+(1/num);
    }
    printf("O resultado: %f\n", h);

    //usando While

    printf("Defina o N: \n");
    scanf("%f", &num);
    h=0; //zerando a soma para não ter interferencia.
    while(num>=1)
    {
    h=h+(1/num);
    num--;
    }
    printf("O resultado: %f\n", h);

    //usando DO/WHILE

    printf("Defina o N: \n");
    scanf("%f", &num);
    h=0;
    do
    {
    h=h+(1/num);
    num--;
    }while(num>=1);
    printf("O resultado: %f\n", h);

    system("pause");
    return 0;
}
