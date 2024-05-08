#include <stdio.h>
#include <string.h>
void deleteChar(char *str, char ch) 
{
	
    int len = strlen(str);
    int i, j = 0;

    for (i = 0; i < len; i++) 
	{
        if (str[i] != ch) 
		{
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}
int main() 
{
	
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to delete: ");
    scanf(" %c", &ch);
    deleteChar(str, ch);
    printf("String after deleting '%c': %s\n", ch, str);
    return 0;
}

