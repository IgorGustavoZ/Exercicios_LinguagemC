#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[4]={1,2,3,4};
    int i;
    for (i=0;i<4;i++)
        printf("%d\t ", v1[i]);
    printf("||\t");
    rotaciona(&v1, 4);
    for (i=0;i<4;i++)
        printf("%d\t ", v1[i]);



    return 0;
}
