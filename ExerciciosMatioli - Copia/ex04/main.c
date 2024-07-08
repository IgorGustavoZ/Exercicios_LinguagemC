#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    if (x<1)
    {
        y=x;
        printf("O valor de y e: %d", y);
    }
    else if (x==1)
        printf("O valor de y e: %d", y=0);
    else if (x>1)
    {
        y=x*x;
        printf("O valor de y e: %d", y);
    }
    system("pause");
    return 0;
}
