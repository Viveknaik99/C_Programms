#include <stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j;
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 2; i++) 
{
    for (j = 0; j < 2; j++) 
{
    scanf("%d", &matrix1[i][j]);
}
}
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 2; i++) 
{
    for (j = 0; j < 2; j++) 
{
    scanf("%d", &matrix2[i][j]);
}
}
    for (i = 0; i < 2; i++) 
{
    for (j = 0; j < 2; j++) 
{
    result[i][j] = matrix1[i][j] / matrix2[i][j];
}
}
    printf("Division result:\n");
    for (i = 0; i < 2; i++) 
{
    for (j = 0; j < 2; j++) 
{
    printf("%d\t", result[i][j]);
}
    printf("\n");
}
    return 0;
}

