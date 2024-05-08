#include <stdio.h>
int main() {
    int decimalNum, HexaNum = 0, placeValue = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) 
{
    int remainder = decimalNum % 16;
    HexaNum += placeValue*remainder;
    placeValue = placeValue*10;
    decimalNum /= 8;
}
    printf("Hexa equivalent: %d\n", HexaNum);
    return 0;
}

