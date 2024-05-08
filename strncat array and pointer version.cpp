#include <stdio.h>
#include <string.h>

int main() {
    // Array Version
    char destination_array[20] = "Hello, ";
    char source_array[] = "world!";
    
    strncat(destination_array, source_array, sizeof(destination_array) - strlen(destination_array) - 1);
    
    printf("Array Version: %s\n", destination_array);

    // Pointer Version
    char destination_pointer[20] = "Hello, ";
    char source_pointer[] = "world!";

    char *dest_ptr = destination_pointer;
    const char *src_ptr = source_pointer;

    while (*dest_ptr) {
        dest_ptr++;
    }

    while (*src_ptr && (dest_ptr < (destination_pointer + sizeof(destination_pointer) - 1))) {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
    }
    
    *dest_ptr = '\0';

    printf("Pointer Version: %s\n", destination_pointer);

    return 0;
}

