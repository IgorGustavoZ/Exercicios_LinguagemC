#include "UnitTest++.h"
#include "vetores.h"

namespace
{
    const int NEL = 5;
    int vetor1[] = {1,2,3,4,5}; //dados para teste
    int vetor2[] = {1,2,3,4,55}; //dados para teste
    int matriz1[2][3] = { {1,2,3}, {1,2,3}};
    int matriz2[2][3] = { {3,2,1}, {3,2,1}};
    int matriz3[2][3] = { {0,0,0}, {0,0,0}};

    TEST(somaMatrizTest)
    {
        somaMatriz(matriz1,matriz2,matriz3,2);
        CHECK_EQUAL(4, matriz3[0][0]);
        CHECK_EQUAL(4, matriz3[1][2]);
    }
    TEST(multiplicaMatrizPorEscalarTest)
    {
        multiplicaMatrizPorEscalar(matriz1,2,10);
        CHECK_EQUAL(10, matriz1[0][0]);
        CHECK_EQUAL(30, matriz1[1][2]);
    }
    TEST(buscaValorNaMatriz)
    {
        int l,c;
        buscaValorMatriz(matriz1,2,30, &l,&c);
        CHECK_EQUAL(1, l);
        CHECK_EQUAL(2, c);
    }

}
