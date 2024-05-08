#include<stdio.h>
#include<string.h>

int main() {
    char ch[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; 
    char ch2[50] = "word";
    char ch1[6];
    int len;
    len = strlen(ch);
    strcpy(ch1, ch); 
    strcat(ch, ch2);

    printf("Value of the second string is: %s\n", ch1); 
    printf("Length of the string ch: %d\n", len);
    printf("String concatenated = %s\n", ch); 
    
    return 0;
}

