#include<stdio.h>
void change (int * x);
int main()
{
	int num =100;
	printf("Before function call num =%d",num);
	change (&num);
	printf("After function call nun +%d",num);
}
 void change (int * num)
 {
 	printf("Before adding num =%d", num);
 	* num = *num + 100;
 	printf("After adding = %d",num);
 }
 

