#include<stdio.h>
float a;
int main ()
{
  extern float a =2;
	printf("%d",a);
	return 0;
}



//(#include<stdio.h>
//float a;
//int main ()
//{
//	a = 3.14;
//	printf("%d",a);
//	return 0;
//}

