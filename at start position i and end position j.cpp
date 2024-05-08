#include <stdio.h>
void setBitsInRange(int *num, int i, int j) {
    if (i < 0 || j < i || j >= 32) {
        printf("Invalid input.\n");
        return;
    }
    int mask = ((1 << (j - i + 1)) - 1) << i;
    *num |= mask;
}
int main() {
    int num;
    int i, j;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the start position (0-31): ");
    scanf("%d", &i);
    printf("Enter the end position (0-31): ");
    scanf("%d", &j);
    setBitsInRange(&num, i, j);
    printf("Modified integer: %d\n", num);
    return 0;
}

