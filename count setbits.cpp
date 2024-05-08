#include <stdio.h>

// Function to count set bits in an integer
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    
    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Call the countSetBits function and display the result
    int setBits = countSetBits(num);
    printf("Number of set bits in %d is %d\n", num, setBits);
    
    return 0;
}

