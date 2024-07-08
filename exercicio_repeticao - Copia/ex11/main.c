#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, num;
    printf("Digite quantos num pares: \n");
    scanf("%d", &num);
    for (cnt=0;cnt<=num;cnt+=2)
        printf("%d\n", cnt);
    system("pause");
    return 0;
}
