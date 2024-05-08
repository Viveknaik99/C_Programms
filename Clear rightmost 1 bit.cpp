#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("The number is already zero.\n");
    } else {
        int result = num & (num - 1);

        printf("Original number: %d\n", num);
        printf("Number with the rightmost 1 bit cleared: %d\n", result);
    }

    return 0;
}

