#include <stdio.h>
#include <string.h>

// Array version of strncpy
void strncpy_array(char dest[], const char src[], size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Ensure null-termination
}

// Pointer version of strncpy
char *strncpy_pointer(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Ensure null-termination
    return dest;
}

int main() {
    char dest_array[10];
    char dest_pointer[10];

    const char *source = "Hello, World!";
    size_t n = 5;

    // Using the array version of strncpy
    strncpy_array(dest_array, source, n);
    printf("Array version: %s\n", dest_array);

    // Using the pointer version of strncpy
    strncpy_pointer(dest_pointer, source, n);
    printf("Pointer version: %s\n", dest_pointer);

    return 0;
}

