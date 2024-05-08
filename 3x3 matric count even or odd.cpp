#include <stdio.h>

int main() {
    int matrix[3][3];
    int evenCount = 0;
    int oddCount = 0;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (matrix[i][j] % 2 == 0) 
			{
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    
    return 0;
}

