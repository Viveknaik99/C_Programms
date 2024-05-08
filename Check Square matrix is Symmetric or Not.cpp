#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[10][10], rowSize, colSize, i, j, matTrans[10][10];
    printf("Enter the Size of Row and Column: ");
    scanf("%d%d", &rowSize, &colSize);
    printf("\nEnter %d*%d Matrix Elements: ", rowSize, colSize);
    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<colSize; j++)
            scanf("%d", &mat[i][j]);
    }
    printf("\nOriginal Matrix is:\n");
    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<colSize; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
    // Transposing the Matrix.....
    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<colSize; j++)
            matTrans[j][i] = mat[i][j];
    }
    printf("\nTranspose of Matrix is:\n");
    for(i=0; i<colSize; i++)
    {
        for(j=0; j<rowSize; j++)
            printf("%d  ", matTrans[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
