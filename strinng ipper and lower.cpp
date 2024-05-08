#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20], str2[20];
	printf("Enter 1st string:");
	gets(str1);
	printf("Enter 2nd string:");
	gets (str2);
	if (strcmp (str1,str2) == 0)
	printf("String are equal\n");
	else
	printf("String  are not equal\n");
	strupr(str1);
	puts(str1);
	strlwr(str1);
	return 0;
}


