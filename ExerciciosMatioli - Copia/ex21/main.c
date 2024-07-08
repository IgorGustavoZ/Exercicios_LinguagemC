#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c;
    printf("Digite o valor i: \n");
    scanf("%d", &i);
    printf("Digite os valor a, b e c \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (i==1)
    {
        if (c>a && c>b && b>a)
            printf("%d %d %d \n", a,b,c);
        else if (a>c && a>b && b>c)
            printf("%d %d %d \n", c,b,a);
        else if (b>a && b>c && c>a)
            printf("%d %d %d \n", a,c,b);
    }
    else if (i==2)
    {
        if (c>a && c>b && b>a)
            printf("%d %d %d \n", c,b,a);
        else if (a>c && a>b && b>c)
            printf("%d %d %d \n", a,b,c);
        else if (b>a && b>c && c>a)
            printf("%d %d %d \n", b,c,a);
    }
    else if (i==3)
    {
        if (c>a && c>b && b>a)
            printf("%d %d %d \n", b,c,a);
        else if (a>c && a>b && b>c)
            printf("%d %d %d \n", b,a,c);
        else if (b>a && b>c && c>a)
            printf("%d %d %d \n", c,b,a);
    }
    system("pause");
    return 0;
}
