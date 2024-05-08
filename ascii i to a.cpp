#include<stdio.h>
int main()
{
int asciiValue;
    printf("Enter an ASCII integer value: ");
    scanf("%d", &asciiValue);
    if (asciiValue >= 65 && asciiValue <= 90) 
{
        char character = (char)asciiValue;
        printf("The corresponding alphabet character is: %c\n", character);
    } else 
	{
        printf("Invalid input. Please enter an ASCII integer between 65 and 90.\n");
    }
    return 0;
}

