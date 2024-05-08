#include <stdio.h>
 int main()
 {
 	int a,b,temp;
 	printf("Enter the value of a:" );
 	scanf("%d", &a);
 	printf("\nEnter the value of b:");
 	scanf("%d", &b);
 	printf("Before Swapping:\n");
 	printf("a: %d\n",a);
 	printf("b: %d\n",b);
    a = a ^ b; 
    b = a ^ b;
    a = a ^ b;
 	printf("After Swapping:\n");
 	printf("a: %d\n",a);
 	printf("b: %d\n",b);
 	return 0;
 }
