#include <stdio.h>
int main() 


{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
{
        scanf("%d", &arr[i]);
}
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) 
{
        if (arr[i] < smallest) 
{
            smallest = arr[i];
}
        if (arr[i] > largest) 
{
            largest = arr[i];
}
}
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    return 0;
}
