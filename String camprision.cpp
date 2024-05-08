#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int stringcompare(char *a, char *b);

int main()
{
    char str1[20];
    char str2[20];
    int value;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    value = strcmp(str1, str2);
    if (value == 0)
        printf("Strings are the same\n");
    else
        printf("Strings are not the same\n");

    value = stringcompare(str1, str2);
    if (value == 0)
        printf("Custom comparison: Strings are the same\n");
    else
        printf("Custom comparison: Strings are not the same\n");
    return 0;
}

int stringcompare(char *a, char *b)
{
    int flag = 0;
    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
    {
            flag = 1;
    }
    a++;
    b++;
    }
    if (*a == '\0' && *b == '\0')
        return 0;
    else
        return 1;
}
  
