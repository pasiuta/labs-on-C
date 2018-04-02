#include <stdio.h>
#include "dk_tool.h"
int main(void)
{
    int  a,b,c,d;
    int length;

    printf("vvedit' rayd and stovp\n");
    scanf( "%i %i",&a,&b);
    int firstmatrix[length][length];
    int secondmatrix[length][length];
    printf("vvedit' elementi first matr\n");
    for(c=0;c<a;c++)
    {
        for(d=0;d<b;d++)
        {
            scanf("%i",&firstmatrix[c][d]);
        }
    }

    printf("vvedit' elementi second matr\n");
    for(c=0;c<a;c++)
    {
        for(d=0;d<b;d++)
        {
            scanf("%i",&secondmatrix[c][d]);
        }
    }


    matrixsum(length,firstmatrix,secondmatrix);
}


