#include <stdio.h>
int main() {
    int decimalNum, octalNum = 0, placeValue = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) 
{
    int remainder = decimalNum % 8;
    octalNum += placeValue*remainder;
    placeValue = placeValue*10;
    decimalNum /= 8;
}
    printf("Octal equivalent: %d\n", octalNum);
    return 0;
}

