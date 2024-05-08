#include <stdio.h>
#include <string.h>
size_t array_strlen(const char *str) 
{
    size_t length = 0;
    while (str[length] != '\0') 
{
    length++;
}
    return length;
}
size_t pointer_strlen(const char *str) 
{
    const char *ptr = str;
    while (*ptr != '\0') 
{
    ptr++;
}
    return ptr - str;
} 
int main() 
{
    const char *text = "Hi, Vivek!";
    printf("Using array : length of \"%s\" is %zu\n", text, array_strlen(text);
    printf("Using pointer : length of \"%s\" is %zu\n", text, pointer_strlen(text);
    return 0;
}

