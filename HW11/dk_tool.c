//
// Created by dima on 10.03.18.
//
#include <stdio.h>
#include "dk_tool.h"

void matrixsum (int length,  int firstmatrix[length][length], int secondmatrix[length][length]) {
    int result = 0;
    for(int a=0;a<length;a++){
        for(int b=0;b<length;b++){
            result = firstmatrix[a][b]+secondmatrix[a][b];
            printf("  %i   ", result);}
        printf("\n");
    }

}
