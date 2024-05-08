#include <stdio.h>
unsigned int setBits(unsigned int num, int p, int n) {
    unsigned int mask = ((1 << n) - 1) << p;
    return num | mask;
}

int main() {
    unsigned int num;
    int p, n;

    printf("Enter an integer: ");
    scanf("%u", &num);
    
    printf("Enter the starting position (0-based): ");
    scanf("%d", &p);

    printf("Enter the number of bits to set: ");
    scanf("%d", &n);

    if (p >= 0 && p <= 31 && n > 0 && n <= 32) {
        unsigned int result = setBits(num, p, n);
        printf("Result after setting %d bits at position %d to 1: %u\n", n, p, result);
    } else {
        printf("Invalid input. Please ensure the position is between 0 and 31 and the number of bits is between 1 and 32.\n");
    }

    return 0;
}

