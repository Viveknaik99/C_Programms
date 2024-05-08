#include<stdio.h>
int main()
{
  int num,rem,mul=1,bin=0;
  printf("\nEnter the Number : ");
  scanf("%d",&num);
  while(num!=0)
{
    rem=num%2;
    bin=bin+(rem*mul);
    mul=mul*10;
    num=num/2;
}
  printf("\nBinary Value : %d",bin);
  return 0;
}
