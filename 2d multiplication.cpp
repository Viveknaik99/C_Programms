
#include <stdio.h>
int main() 
{
    int mat1[2][2], mat2[2][2], result[2][2];
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < 2; i++) 
{
    for (int j = 0; j < 2; j++) 
{
    scanf("%d", &mat1[i][j]);
}
}
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < 2; i++) 
{
    for (int j = 0; j < 2; j++) 
{
    scanf("%d", &mat2[i][j]);
}
}
    for (int i = 0; i < 2; i++) 
{
    for (int j = 0; j < 2; j++) 
{
    result[i][j] = 0;
    for (int k = 0; k < 2; k++) 
{
    result[i][j] += mat1[i][k] * mat2[k][j];
}
}
}
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) 
{
    for (int j = 0; j < 2; j++) 
{
    printf("%d ", result[i][j]);
}
    printf("\n");
}
    return 0;
}

