//
// Created by dima on 01.04.18.
//

#include "dk_tool.h"

void subtractedmatrix(int length, int matrixC[length][length], int matrixA[length][length], int matrixB[length][length])
{
    int i = 0, j = 0;

    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {
            matrixC[i][j] = 0;
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}