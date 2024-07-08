int ex03(int valor)
{
    int cnt=2;
    do
    {
      if (valor%cnt==0) return 1;
        else return 0;
        cnt++;
    }
    while (cnt<valor);
}
