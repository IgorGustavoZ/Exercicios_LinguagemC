int ex09(int num)
{
    int soma=0,div=1;
    while (div<num)
    {
       if (num%div==0)soma=soma+div;
       div++;
    }
    if (soma==num)
        return 1;
    else if(soma!=num)
        return 0;
}
