#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l;
    printf("Digite sua Letra: ");
    scanf("%c", &l);
    l=l-32;
    printf("Sua letra em Maiscula e: %c\n", l);
    system("pause");
    return 0;
}
