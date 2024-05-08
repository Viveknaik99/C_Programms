#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    
    printf("Original str1: %s\n", str1);
    printf("str2 to be concatenated: %s\n", str2);
    
    // Concatenate str2 to str1 using strcat
    strcat(str1, str2);
    
    printf("Concatenated str1: %s\n", str1);
    
    return 0;
}

