#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, num;
    printf("Digite um numero impar: \n");
    scanf("%d", &num);
    for (cnt=num;cnt>=1;cnt-=2)
        printf("%d\n", cnt);
    printf("FIM \n");
    system("pause");
    return 0;
}
