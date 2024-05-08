#include <stdio.h>
#include <string.h>
#include <ctype.h>

int  main()
 {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i]; i++) 
	{
        input[i] = tolower(input[i]);
    }
    printf("Lowercase: %s", input);
    for (int i = 0; input[i]; i++) 
	{
        input[i] = toupper(input[i]);
    }
    printf("Uppercase: %s", input);
    return 0;
}

