#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, num;
    printf("Digite o numero par: \n");
    scanf("%d", &num);
    for (cnt=num;cnt>=0;cnt-=2)
        printf("%d\n", cnt);
    printf("FIM \n");
    system("pause");
    return 0;
}
