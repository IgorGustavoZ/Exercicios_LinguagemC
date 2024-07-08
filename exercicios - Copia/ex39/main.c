#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g1, g2, g3;
    g1=0.46*780000;
    g2=0.32*780000;
    g3=780000-(g1+g2);
    printf("O primeiro lugar recebeu: %d\nO segundo lugar recebeu: %d\nO terceiro lugar recebeu: %d ", g1, g2, g3);
    system("pause");
    return 0;
}
