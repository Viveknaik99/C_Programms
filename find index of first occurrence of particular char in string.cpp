#include <stdio.h>
int findFirstOccurrence(char *str, char target) 
{
    int index = -1;
    for (int i = 0; str[i] != '\0'; i++)
	 {
        if (str[i] == target) 
		{
            index = i; 
            break;  
        }
    }
    return index;
}
int main() 
{
    char inputString[100];
    char targetChar;
    int index;
    printf("Enter a string: ");
    scanf("%s", inputString);
    printf("Enter the character to find: ");
    scanf(" %c", &targetChar);
    index = findFirstOccurrence(inputString, targetChar);
    if (index != -1) 
	{
        printf("The first occurrence of '%c' is at index %d\n", targetChar, index);
    } else 
	{
        printf("'%c' not found in the string.\n", targetChar);
    }
    return 0;
}


