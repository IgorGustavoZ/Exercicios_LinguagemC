int todosDiferentes(int *vetor, int nElementos)
{
   int i, num, dif=0, iguais=0;
   num=vetor[0];
   for(i=1;i<nElementos;i++)
   {
       if(num==vetor[i])
       {
           num=vetor[i];
           iguais++;
       }
       else if(num!=vetor[i])
       {
           num=vetor[i];
           dif++;
       }
   }
   if(dif==2)return 0;
   else return 1;
}
