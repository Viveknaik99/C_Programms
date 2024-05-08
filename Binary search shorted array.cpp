#include <stdio.h>

int binary_search(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;

    while (left <= right) 
	{
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) 
	{
    return mid;
    } else if (arr[mid] < target) 
	{
    left = mid + 1;
    } else {
    right = mid - 1;
    }
    }
    return -1;  
    }
int main() 
{
    int sorted_array[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int target_element = 3;
    int result = binary_search(sorted_array, size, target_element);
    if (result != -1)
	{
        printf("Element %d found at index %d\n", target_element, result);
    } else {
        printf("Element %d not found in the array\n", target_element);
    }
    return 0;
}

