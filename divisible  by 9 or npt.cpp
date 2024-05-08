#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);
    
    if (num % 9 == 0) 
{
    printf("Divisible by 9\n",num);
    } else
{
    printf("Not divisible by 9\n",num);
    }
    return 0;
}

