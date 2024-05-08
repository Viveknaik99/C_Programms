#include <stdio.h>
#include <math.h>

int main() 
{
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers in the range %d to %d:\n", start, end);
    
    for (int num = start; num <= end; num++) 
{
        int sum = 0;
        int temp = num;
        int numDigits = log10(num) + 1;

        while (temp != 0) 
	{
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
    }

        if (sum == num) 
	{
            printf("%d ", num);
        }
    }

    return 0;
}

