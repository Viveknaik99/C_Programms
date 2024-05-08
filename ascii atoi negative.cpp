#include<stdio.h>
int main()
 {
    char character;
    int integerValue;
    printf("Enter a lowercase alphabet character: ");
    scanf(" %c", &character);
    if (character >= 'a' && character <= 'z') 
	{
        integerValue = -(character - 'a' + 1);
        printf("Integer value for %c is %d\n", character, integerValue);
    } else 
	{
        printf("Invalid input. Please enter a lowercase alphabet character.\n");
    }
    return 0;
}


