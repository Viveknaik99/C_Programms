#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!"; // Source string
    char destination[20]; // Destination string

    // Using strcpy() function
    strcpy(destination, source);
    printf("Using strcpy(): %s\n", destination);

    // Using array version
    char sourceArray[] = "Array Version";
    char destinationArray[20];
    int i = 0;

    while (sourceArray[i]) {
        destinationArray[i] = sourceArray[i];
        i++;
    }
    destinationArray[i] = '\0'; // Null-terminate the destination
    printf("Using array version: %s\n", destinationArray);

    // Using pointer version
    char sourcePointer[] = "Pointer Version";
    char destinationPointer[20];
    char* srcPtr = sourcePointer;
    char* destPtr = destinationPointer;

    while (*srcPtr) {
        *destPtr = *srcPtr;
        srcPtr++;
        destPtr++;
    }
    *destPtr = '\0'; // Null-terminate the destination
    printf("Using pointer version: %s\n", destinationPointer);

    return 0;
}

