#include <stdio.h>

#include "dk_tool.h"
int main()
{
    int i = 0, j = 0;
    int length = 0;

    printf("Enter size of your matrix:\n");                            //zapyt rozmirnosti matric
    scanf("%i", &length);

    int matrixA[length][length];
    int matrixB[length][length];                                                 //oholoshennya matric
    int matrixC[length][length];

    printf("\nEnter first matrix:\n\n");

    for(i = 0; i < length; i++)                                             //cykl for dlya vvedennya pershoyi matrici
    {
        for(j = 0; j < length; j++)
        {
            printf("Vvedit [%i][%i] znachennya matryci: ", i, j);
            scanf("%i", &matrixA[i][j]);
        }
    }

    printf("\n\nEnter second matrix:\n\n");

    for(i = 0; i < length; i++)                                             //cykl for dlya vvedennya drugoyi matrici
    {
        for(j = 0; j < length; j++)
        {
            printf("Vvedit [%i][%i] znachennya matryci: ", i, j);
            scanf("%i", &matrixB[i][j]); // NOLINT
        }
    }

    subtractedmatrix(length, matrixC, matrixA, matrixB);                   //funkciya dlya vidimannya matric

    printf("Product:\n\n");


    for(i = 0; i < length; i++)                                            //cykl for dlya vyvedennya pershoyi matrici
    {
        for(j = 0; j < length; j++)
        {
            printf("%i	", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < length; i++)                                           //cykl for dlya vyvedennya drugoyi matrici
    {
        for(j = 0; j < length; j++)
        {
            printf("%i	", matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < length; i++)                                           //cykl for dlya vyvedennya resultuyuchoyi matrici
    {
        for(j = 0; j < length; j++)
        {
            printf("%i	", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}