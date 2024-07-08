#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,l;
    printf("Digite seu numero em quilograma: ");
    scanf("%f", &k);
    l=k/0.45;
    printf("Seu numero em libras e: %f\n", l);
    system("pause");
    return 0;
}
