//
// Created by dima on 01.04.18.
//

#include "dk_tool.h"

void printmatrix(int length,int matrix[length][length])
{
    for(int i = 0; i < length; i++)                                           //matrix output
    {
        for(int j = 0; j < length; j++)
        {
            printf(" %d	", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void additionmatrix(int length, int resultmatrix[length][length], int fisrtmatrix[length][length], int secondmatrix[length][length])
{
    int i = 0, j = 0;

    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {
            resultmatrix[i][j] = 0;
            resultmatrix[i][j] = fisrtmatrix[i][j] + secondmatrix[i][j];
        }
    }
}
