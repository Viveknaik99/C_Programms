#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
 {
	
    char input[MAX_SIZE];
    int freq[256] = {0};
    printf("Enter the string:");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("Character frequencies (repeated characters removed):\n"); 
    for (int i = 0; input[i] != '\0'; i++) 
	{
        char currentChar = input[i];
        if (freq[currentChar] == 0) 
		{
            int count = 1;
            for (int j = i + 1; input[j] != '\0'; j++) 
			{
                if (input[j] == currentChar) 
				{
                    count++;
                }
            }
            printf("'%c' appears %d times\n", currentChar, count);
            freq[currentChar] = 1;
        }
    }
    return 0;
}

