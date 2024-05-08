#include <stdio.h>


void decimalToHexadecimal(int decimal) 
{
    if (decimal == 0) 
{
        return;
}

    decimalToHexadecimal(decimal / 16);

    int remainder = decimal % 16;
    if (remainder < 10) 
	{
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Hexadecimal equivalent: ");
    if (decimal == 0) {
        printf("0");
    } else {
        decimalToHexadecimal(decimal);
    }
    printf("\n");

    return 0;
}

