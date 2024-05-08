#include <stdio.h>

// Example of using GCC's __attribute__ directive
void my_function() __attribute__((deprecated));

int main() {
    my_function();
    return 0;
}

void my_function() {
    printf("This is a deprecated function.\n");
}

