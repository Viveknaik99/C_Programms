#include<stdio.h>
#include <stdlib.h>
int main()
{
    int integerInput;
    printf("Enter an integer: ");
    scanf("%d", &integerInput);
    if (integerInput >= 0) 
	{
        printf("Please enter a negative integer.\n");
    } else 
	{
        char alphabetChar = 'A' + abs(integerInput) - 1;
        printf("The corresponding alphabet character is: %c\n", alphabetChar);
    }
    return 0;
}

