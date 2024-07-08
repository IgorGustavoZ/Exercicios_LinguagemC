#include <stdio.h>

void imprimeMatriz(int m[][3], int nLin)
{
    int l, c, soma;
    for(l=0;l<nLin;l++)
    {
        for(c=0;c<5;c++)
        {
            soma = m[l][c] + m[l][c];
        }
    }

}

void somaMatriz(int m1[][3], int m2[][3], int m3[][3], int nLin)
{
    int l, c;
    for(l=0;l<nLin;l++)
    {
        for(c=0;c<3;c++)
        {
           m3[l][c]+=m2[l][c]+m1[l][c];
        }
    }

}

void multiplicaMatrizPorEscalar(int m1[][3], int nLin, int escalar)
{
    int l, c;
    for(l=0;l<nLin;l++)
    {
        for(c=0;c<3;c++)
        {
            m1[l][c]=m1[l][c]*escalar;
        }

    }
}

void buscaValorMatriz(int m[][3], int nLin, int valorBuscar, int *lin, int *col )
{
    int c, l;
    for(l=0;l<nLin-1;l++) /*Professor, se estiver vendo isso, tive q faze -1 pois estava dando
                            algum erro em que o l estava guardando o nLin todas as vezes.*/
    {
        for(c=0; c<3 ;c++)
        {
        if(valorBuscar == m[l][c])break;

        }
    }
    *lin=l;
    *col=c;


}
