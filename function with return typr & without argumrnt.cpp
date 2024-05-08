#include<stdio.h>
int add ();
int a, b;
int main ()
{
	int result;
	printf("Enter 2 no\n");
	scanf("%d %d", &a, &b);
	result = add();
	printf("Sum of a & b = %d",result);
}
 int add()
 {
 	int sum;
 	sum = a+b;
 	return sum;
 }

