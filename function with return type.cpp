#include<stdio.h>
int add (int a, int b);
int main()
{
	int x,y,result;
	printf("Enter 2 num%n");
	scanf("%d %d",&x,&y);
	result = add (x,y);
	printf("Sum of x & y =%d",result);
}
	int add(int a, int b)
	{
		int sum;
	    sum = a+b;
	    return sum;
	}



