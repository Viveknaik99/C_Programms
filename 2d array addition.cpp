#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < 2; i++)
	 {
        for (int j = 0; j < 2; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }

   


    return 0;
}

