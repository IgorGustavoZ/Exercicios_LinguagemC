#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cnt;
    printf("Escreva seu numero: \n");
    scanf("%d", &num);
    for (cnt=num;cnt>=0;cnt-=1)
        printf("%d\n", cnt);
    printf("### FIM ### \n");
    system("pause");
    return 0;
}
