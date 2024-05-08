#include <stdio.h>

int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++)
	 {
        if (arr[i] == target) 
		{
            return i; 
        }
        if (arr[i] > target) {
            break;
        }
    }
    return -1; 
}

int main() 
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = linearSearch(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}


