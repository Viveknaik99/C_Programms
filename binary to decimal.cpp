#include <stdio.h>
int main() 
{
    int decimal, binary = 0, base = 2;
    printf("Enter a deicmal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) 
{
        int digit = decimal % 10;
        binary += digit * base;
        decimal /= 10;
        base *= 2;
}
    printf("Binary equivalent: %d\n", binary);
    return 0;
}

