#include<stdio.h>
void add (int a, int b);
int main()
{
	int a=50 , b=50;
	add (a,b);
}
	void add(int a, int b)
	{
		int result;
		result = a+b;
		printf("Sum of a&b = %d",result);
	}


