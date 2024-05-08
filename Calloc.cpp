#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n,sizeof(int));

    if (ptr == NULL) {
        printf("Sorry, no memory is allocated\n");
        exit(0);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of %d numbers = %d\n", n, sum);

    free(ptr);
    return 0;
}

