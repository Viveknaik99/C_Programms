#include <stdio.h>

int main() {
    int num;
    num++;
    printf("After increment: %d\n", num);
    scanf("%d", &num);
    num--;
    printf("After decrement: %d\n", num);
    scanf("%d", &num);
    return 0;
}

