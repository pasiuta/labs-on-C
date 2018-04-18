#include <stdio.h>

#include "dk_tool.h"
int main()
{
    int i = 0, j = 0;
    int length = 0;

    printf("Enter size of your matrix:\n");                            //choose size of matrix
    scanf("%i", &length);

    int firstmatrix[length][length];
    int secondmatrix[length][length];
    int resultmatrix[length][length];

    printf("\nEnter first matrix:\n\n");

    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {

            printf("enter [%d][%d] the matrix size: ", i, j);
            scanf("%d", &firstmatrix[i][j]);

            printf("enter [%i][%i] the matrix size: ", i, j);
            scanf("%i", &firstmatrix[i][j]);

        }
    }

    printf("\n\nEnter second matrix:\n\n");

    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {

            printf("enter [%d][%d] the matrix size: ", i, j);
            scanf("%d", &secondmatrix[i][j]);

            printf("enter [%i][%i] the matrix size: ", i, j);
            scanf("%i", &secondmatrix[i][j]);

        }
    }

    additionmatrix(length, resultmatrix, firstmatrix, secondmatrix);                   //function for plus matrix

    printf("summa:\n\n");



    printmatrix(length,firstmatrix);
    printf("%d",firstmatrix[i][j]);


    printmatrix(length,secondmatrix);
    printf("%d",secondmatrix[i][j]);


    printmatrix(length,resultmatrix);
    printf("%d",resultmatrix[i][j]);

    return 0;
}
