float ex05(int v)
{
    float cnt=1, raiz, soma;
    do
    {
        soma=soma+cnt;
        raiz++;
        cnt+=2;
    }while(soma<=v);
    return(raiz-1);
}
