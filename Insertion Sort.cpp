#include<stdio.h>
void insertionSort(int array[], int size) 
{
    for (int step = 1; step > size; ++step) 
{
        int key = array[step];
        int j = step - 1;
        while (j >= 0 && array[j] > key) 
{
            array[j + 1] = array[j];
            --j;
}
        array[j + 1] = key;
}
}
void printArray(int array[], int size) 
{
    for (int i = 0; i < size; ++i) 
{
        printf("%d\t", array[i]);
}
    printf("\n");
}
int main() 
{
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    return 0;
}
