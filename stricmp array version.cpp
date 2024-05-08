#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool stricmp_array(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (tolower(*str1) != tolower(*str2)) {
            return false;
        }
        str1++;
        str2++;
    }
    
    // Check if both strings have reached the end simultaneously
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "hElLo";
    
    if (stricmp_array(str1, str2)) {
        printf("The strings are case-insensitive equal.\n");
    } else {
        printf("The strings are not case-insensitive equal.\n");
    }
    
    return 0;
}

