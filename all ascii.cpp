#include<stdio.h>
int main(void)
{
    char a='A';
    while(a)
    {
        printf("%d = %c\n", a, a);
        a++;
    }
    printf("%d = NULL", a);
    return 0;
}
