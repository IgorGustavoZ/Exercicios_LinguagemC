#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta, m3;
    printf("quantos m3?\n");
    scanf("%d", &m3);
    if (m3<80)
    {
        conta=5+(0.05*m3);
        printf("A conta a pagar sera de: %f\n", conta);
    }
    else if (m3>80 && m3<100)
    {
        conta=500+(0.25*m3);
        printf("A conta a pagar sera de: %f\n", conta);
    }
    else if (m3>=100)
    {
        conta=800+(0.04*m3);
        printf("A conta a pagar sera de: %f\n", conta);
    }
    system("pause");
    return 0;
}
