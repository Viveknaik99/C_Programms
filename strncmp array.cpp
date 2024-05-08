#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, OpenAI!";
    int n = 5; // Number of characters to compare

    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("The first %d characters of the strings are equal.\n", n);
    } else if (result < 0) {
        printf("The first %d characters of str1 are less than str2.\n", n);
    } else {
        printf("The first %d characters of str1 are greater than str2.\n", n);
    }

    return 0;
}

