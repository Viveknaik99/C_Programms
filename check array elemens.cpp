#include <stdio.h>
int areElementsDistinct(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) 
{
    for (int j = i + 1; j < size; j++) 
{
    if (arr[i] == arr[j]) 
{
    return 0; 
}
}
}
    return 1; 
}

   int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
{
    scanf("%d", &arr[i]);
}
    if (areElementsDistinct(arr, size)) 
{
    printf("All elements are distinct.\n");
}  else 
{
    printf("Not all elements are distinct.\n");
}

    return 0;
}

