int menorElemento(int *vetor, int nElementos)
{
    int i, menorValor = vetor[0];
    int posicao=1;

    for(i=1;i<nElementos;i++)
    {
        if (menorValor>vetor[i])
        {
            menorValor=vetor[i];
            posicao++;
        }
    }
    printf("%d", posicao);

    return menorValor, posicao;
}
