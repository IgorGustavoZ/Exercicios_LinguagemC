int escalar (int *vetor1, int *vetor2, int nElementos)
{
    int soma=0.0;
    int n;
    for(n=0;n<nElementos;n++)
    {
        soma += (vetor1[n]*vetor2[n]);
    }
    return soma;
}
