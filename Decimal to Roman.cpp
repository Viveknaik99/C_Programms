#include <stdio.h>
void decimalToRoman(int num) 
{
	
    int decimals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    printf("Roman numeral representation of %d is: ", num);
    for (int i = 0; num > 0; i++) 
{
    while (num >= decimals[i]) 
{
    printf("%s", romanNumerals[i]);
    num -= decimals[i];
}
}
    printf("\n");
}
int main() 

{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToRoman(decimal);
    return 0;
}

