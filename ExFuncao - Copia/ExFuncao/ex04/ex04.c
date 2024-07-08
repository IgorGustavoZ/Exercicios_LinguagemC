int ex04(int a, int b)
{
    int soma=0, cnt=0;
    do
    {
      soma=soma+cnt;
      cnt++;
    }
    while(cnt<=a || cnt<=b);
    return soma;
}
