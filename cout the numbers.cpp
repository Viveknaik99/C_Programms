#include <stdio.h>
int main ()
{
	int num, count=0;
	printf("Enter the number\n");
	scanf("%d", &num);
	while(num > 0)
{
    num = num / 10;
    count++;
    
}
    printf("No of digits = % d",count);
    return 0;
}

