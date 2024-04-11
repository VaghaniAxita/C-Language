// Write a C program to find sqaure of each elements of an 1D array using Pointer.

#include <stdio.h>

#define MAX_SIZE 100


void squareArray(int *arr, int size) {
    
    for (int i = 0; i < size; ++i) {
        
        *(arr + i) *= *(arr + i);
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter elements of the array: \n", size);
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    squareArray(arr, size);

    
    printf("Square of each element of the array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
