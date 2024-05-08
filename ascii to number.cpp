#include <stdio.h>
int main() 
{  
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %a = %d", a, a);
    
    return 0;
}

