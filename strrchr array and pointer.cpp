#include <stdio.h>
#include <string.h>
int arrayLastIndexOf(const char *str, char target) {
    int index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            index = i;
        }
    }
    return index;
}
int pointerLastIndexOf(const char *str, char target) {
    const char *lastOccurrence = NULL;
    
    while (*str != '\0') {
        if (*str == target) {
            lastOccurrence = str;
        }
        str++;
    }
    if (lastOccurrence != NULL) {
        return lastOccurrence - str + 1; 
    } else {
        return -1; 
    }
}
int main() {
    char input[] = "Hello, World!";
    char target = 'o';

    int arrayIndex = arrayLastIndexOf(input, target);
    if (arrayIndex != -1) {
        printf("Array Version: Last occurrence of '%c' is at index %d\n", target, arrayIndex);
    } else {
        printf("Array Version: '%c' not found in the string\n", target);
    }
    int pointerIndex = pointerLastIndexOf(input, target);
    if (pointerIndex != -1) {
        printf("Pointer Version: Last occurrence of '%c' is at index %d\n", target, pointerIndex);
    } else {
        printf("Pointer Version: '%c' not found in the string\n", target);
    }
    return 0;
}

