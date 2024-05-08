#include <stdio.h>
#include <string.h>

int main() 
{
    char inputString[1000];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    int wordCount = 0;
    char *token = strtok(inputString, " \t\n");
    while (token != NULL) {
        printf("%s\n", token);
        wordCount++;
        token = strtok(NULL, " \t\n");
    }
    printf("Total words in the string: %d\n", wordCount);
    return 0;
}

