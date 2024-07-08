#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    printf("Digite 10 valores: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);
    scanf("%f", &n7);
    scanf("%f", &n8);
    scanf("%f", &n9);
    scanf("%f", &n10);
    media=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10.0;
    printf("A media e: %f\n", media);
    system("Pause");
    return 0;
}
