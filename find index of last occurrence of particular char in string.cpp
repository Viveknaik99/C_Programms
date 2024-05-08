#include <stdio.h>
#include <string.h>
int main() 
{
	
    char input_string[100];
    char search_char;
    int index = -1;
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    printf("Enter a character to search for: ");
    scanf(" %c", &search_char);
    for (int i = 0; i < strlen(input_string); i++) 
	{
        if (input_string[i] == search_char) 
		{
            index = i;
        }
    }
    if (index != -1) 
	{
        printf("Last occurrence of '%c' is at index %d\n", search_char, index);
    } else 
	{
        printf("'%c' not found in the string.\n", search_char);
    }
    return 0;
}
