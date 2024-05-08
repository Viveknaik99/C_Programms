#include <stdio.h>

bool isMagicSquare(int mat[][3]) 
{
    int n = 3;
    int sumd1 = 0, sumd2 = 0;

    for (int i = 0; i < n; i++)
	{
        sumd1 += mat[i][i];
        sumd2 += mat[i][n - 1 - i];
    }
    if (sumd1 != sumd2)
        return false;
    int sum = sumd1;
    for (int i = 0; i < n; i++)
	{
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) 
		{
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != sum || colSum != sum)
            return false;
    }
    return true;
}
int main() {
    int mat[3][3] = {{2, 7, 6},
                     {9, 5, 1},
                     {4, 3, 8}};
    if (isMagicSquare(mat))
        printf("Magic Square\n");
    else
        printf("Not a magic Square\n");

    return 0;
}

