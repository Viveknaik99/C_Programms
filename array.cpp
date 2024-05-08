#include <stdio.h>

int main()
{
    int marks[5], i;

    printf("Enter the marks of a student: ");
    for (i = 0; i < 5; i++)
{  
        scanf("%d", &marks[i]);
}
    printf("The entered marks are: ");
    printf("%d\t%d\t%d\t%d\t%d\n", marks[0], marks[1], marks[2], marks[3], marks[4],marks[5]);
    
    return 0;
}

