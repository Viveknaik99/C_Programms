#include <stdio.h>

int main() {
    int matrix[3][3];
    
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    int smallest = matrix[0][0];
    int largest = matrix[0][0];
    
   
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (matrix[i][j] < smallest) 
			{
                smallest = matrix[i][j];
            }
            if (matrix[i][j] > largest) 
			{
                largest = matrix[i][j];
            }
        }
    }
    
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    
    return 0;
}

