#include<stdio.h>
int main()
{
	
	int n;
	printf("Enter the number  in the array;");
	scanf("%d", &n);
	int ar[n];	
	printf("Enter %d element:\n",n);
	for(int i = 0; i <n; i++)
{
	scanf("%d", &ar[i]);
}
	int evenCount = 0;
	int oddCount = 0;
	for (int i=0; i < n; i++)
{
	if(ar[i] %2 ==0)
{
		evenCount++;
}	else 
{
	   oddCount++;
}
}
	printf("NUmber is even :%d\n",evenCount);
	printf("Number is odd  :%d\n",oddCount);
	return 0;
}


