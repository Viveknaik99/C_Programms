#include <stdio.h>
#include <string.h>
int countOccurrences(const char *str, char target) 
{
	
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == target) 
		{
            count++;
        }
    }
    return count;
}

int main() 
{
    char inputString[100];
    char targetChar;
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    printf("Enter the character you want to count: ");
    scanf("%c", &targetChar);
    int result = countOccurrences(inputString, targetChar);
    printf("The character '%c' occurs %d times in the string.\n", targetChar, result);
    return 0;
}

