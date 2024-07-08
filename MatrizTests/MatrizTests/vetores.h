#ifndef VETORES_H_INCLUDED
#define VETORES_H_INCLUDED

/*
Recebe uma matriz e imprime seu conteudo. Assume que a matriz terá sempre 3 colunas.
*/
void imprimeMatriz(int m[][3], int nLin);

/*
Recebe 3 marizes e o número de linhas, sendo que serão todas iguais
Deve somar matriz1 pela matriz2 e colocar o resultado em matriz3
*/
void somaMatriz(int m1[][3], int m2[][3], int m3[][3], int nLin);
/*
Recebe uma matriz, o número de linhas e um valor escalar
Deve multiplicar a matriz pelo escalar
*/
void multiplicaMatrizPorEscalar(int m1[][3], int nLin, int escalar);
/*
Recebe uma matriz de inteiros, um inteiro que representa o numero linhas,
um inteiro que o valor a ser pesquisado na matriz, dois inteiros por referencia que
será a linha e coluna onde o elemento foi encontrado. Se não encontrar deverá setar os
valores como -1.
Deve pesquisar na matriz o valor inteiro passado no terceiro parameros e, se encontrar,
colocar no quarto parametros a linha e no quinto paramero a coluna onde o valor foi
encontrado. Se não encontrar setar ambas os parametros como -1.
*/
void buscaValorMatriz(int m[][3], int nLin, int valorBuscar, int *lin, int *col );
#endif // VETORES_H_INCLUDED
