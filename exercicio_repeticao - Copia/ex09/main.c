#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, num;
    printf("Digite quantos num impares: \n");
    scanf("%d", &num);
    for (cnt=1;cnt<=2*num;cnt+=2)
        printf("%d\n", cnt);
    system("pause");
    return 0;
}
