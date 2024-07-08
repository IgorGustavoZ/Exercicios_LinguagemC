#include <stdio.h>
#include <stdlib.h>


int main()
{
    int v1[]={2,3,4,8};
    int v2[]={4,3,2,1};
    int n;
    for(n=0; n<4; n++)
    {
        printf("%d\t %d \n", v1[n], v2[n]);
    }
    printf("Produto escalar = %d\n", escalar(v1,v2,3));
    return 0;
}
