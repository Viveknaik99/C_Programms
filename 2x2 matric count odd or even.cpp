#include <stdio.h>
int main()
{
    
	int matrix[2][2];
    printf("Enter a 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) 
{
    scanf("%d", &matrix[i][j]);
}
}
    
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 0; i < 2; i++) 
{
    for (int j = 0; j < 2; j++) 
{
    if (matrix[i][j] % 2 == 0) 
{
    evenCount++;
} else 
{
    oddCount++;
}
}
} 
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    return 0;
}

