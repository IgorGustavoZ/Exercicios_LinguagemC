int ex08(int a, int b)
{
    int mult=0, soma=0, cnt=1;
    while (cnt<=a)
    {
        soma+=b;
        mult=mult+soma;
        cnt++;
        soma=0;
    }
  return mult;
}
