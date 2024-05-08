#include <stdio.h>
#include <string.h>
int main() {
    char inputString[1000];
    char wordToCount[100]; 
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    printf("Enter the word to count: ");
    scanf("%s", wordToCount);
    int count = 0;
    char *token = strtok(inputString, " "); 
    while (token != NULL) {
        if (strcmp(token, wordToCount) == 0) 
		{
            count++;
        }
        token = strtok(NULL, " ");
    }
    printf("The word '%s' appears %d times in the string.\n", wordToCount, count);
    return 0;
}

