int ex01(int a, int b, int c)
{
    int soma;
    do
    {
      if(a%c==0) soma++;
      a--;
    }
    while(1>=a);
    do
    {
      if(b%c==0) soma++;
      b--;
    }
    while(1>=b);
    return soma;
}
