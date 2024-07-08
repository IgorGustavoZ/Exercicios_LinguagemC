#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ant, suc;
    printf("Digite seu numero: ");
    scanf("%d", &n);
    ant=n-1;
    suc=n+1;
    printf("O sucessor do seu numero e: %d\nE o antecessor e: %d\n", suc, ant);
    system("pause");
    return 0;
}
