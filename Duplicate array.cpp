#include<stdio.h>
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
    int newSize = 0;
    
    for (int i = 0; i < size; i++) 
{
    int isDuplicate = 0;
    for (int j = 0; j < newSize; j++) 
{
    if (arr[i] == arr[j]) 
{
    isDuplicate = 1;
    break;
}
}
    if (!isDuplicate) 
{
    arr[newSize] = arr[i];
    newSize++;
}
}
    printf("Array with duplicates removed:\n");
    for (int i = 0; i < newSize; i++) 
{
    printf("%d ", arr[i]);
}
    printf("\n");
    return 0;
}



