#include <stdio.h>
#include <stdbool.h>

// Function to find the first occurrence of 'needle' in 'haystack'
int array_strstr(const int haystack[], int haystack_size, const int needle[], int needle_size) {
    if (haystack_size < needle_size) {
        return -1; // 'needle' cannot be found in 'haystack' if it's longer
    }

    for (int i = 0; i <= haystack_size - needle_size; i++) {
        bool found = true;

        for (int j = 0; j < needle_size; j++) {
            if (haystack[i + j] != needle[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            return i; // Return the starting index of the first occurrence
        }
    }

    return -1; // 'needle' not found in 'haystack'
}

int main() {
    int haystack[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int needle[] = {4, 5, 6};

    int haystack_size = sizeof(haystack) / sizeof(haystack[0]);
    int needle_size = sizeof(needle) / sizeof(needle[0]);

    int result = array_strstr(haystack, haystack_size, needle, needle_size);

    if (result != -1) {
        printf("Needle found starting at index %d\n", result);
    } else {
        printf("Needle not found in haystack\n");
    }

    return 0;
}

