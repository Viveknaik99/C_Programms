#include <stdio.h>
int a;
int main()
{
	extern int a;
	printf("%d",a);
	return 0;
}
