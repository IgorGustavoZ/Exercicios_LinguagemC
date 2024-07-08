void rotaciona (int *vetor, int nElementos)
{
    int ajd, ajd2;
    ajd=vetor[0];
    ajd2=vetor[1];
    vetor[0]=vetor[3];
    vetor[1]=vetor[2];
    vetor[2]=ajd2;
    vetor[3]=ajd;
}
