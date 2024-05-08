#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "Hello, World!";
    char search_char = 'o';
    
    const char* result = strchr(str, search_char);
    
    if (result != NULL) {
        printf("Found '%c' at position %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }
    
    return 0;
}

