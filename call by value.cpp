
#include <stdio.h>
void change(int);
int main() 
{
    int numm = 100;
    printf("Before function call num = %d\n", numm);
    change(numm);
    printf("After function call num = %d\n", numm);
    return 0;
}

void change(int num) 
{
    printf("Num = %d\n", num);
    num = num + 100;
}
