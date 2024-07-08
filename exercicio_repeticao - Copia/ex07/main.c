#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt;
    float media, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    printf("Digite 10 valores: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);
    scanf("%f", &n7);
    scanf("%f", &n8);
    scanf("%f", &n9);
    scanf("%f", &n10);
    if (n1<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n3+n4+n5+n6+n7+n8+n9+n10)/9);
        else if (n2<0 && n1>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n1+n3+n4+n5+n6+n7+n8+n9+n10)/9);
        else if (n3<0 && n2>=0 && n1>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n4+n5+n6+n7+n8+n9+n10)/9);
        else if (n4<0 && n2>=0 && n3>=0 && n1>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n5+n6+n7+n8+n9+n10)/9);
        else if (n5<0 && n2>=0 && n3>=0 && n4>=0 && n1>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n6+n7+n8+n9+n10)/9);
        else if (n6<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n1>=0 && n7>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n5+n7+n8+n9+n10)/9);
        else if (n7<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n1>=0 && n8>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n5+n6+n8+n9+n10)/9);
        else if (n8<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n1>=0 && n9>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n5+n6+n7+n9+n10)/9);
        else if (n9<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n1>=0 && n10>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n5+n6+n7+n8+n10)/9);
        else if (n10<0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 && n7>=0 && n8>=0 && n9>=0 && n1>=0)
        printf("media: %f\n", media=(n2+n1+n3+n4+n5+n6+n7+n8+n9)/9);
    system("Pause");
    return 0;
}
