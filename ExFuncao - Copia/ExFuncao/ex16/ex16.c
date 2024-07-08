int ex16(int n)
{
    int i=1, obs;
    while(i<=n)
    {
        if(i<=2)
            printf("1\n");
        else if(i>=2)
        {
           obs=obs-1+obs-2;
           printf("%d\n", i);
        }
        i++;
        obs=i;
    }
}
