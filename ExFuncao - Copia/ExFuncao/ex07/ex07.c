int ex07(int a)
{
   int cnt=1, soma;
   while(cnt<=a)
   {
        soma=soma+(cnt/(2*cnt));
        cnt++;
   }

   return soma;
}
