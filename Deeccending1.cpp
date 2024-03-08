//#include<stdio.h>
//#include<conio.h>
//
//int main()
//{
//	int i,size,j,swap;
//	
//	printf("Enter array size:");
//	scanf("%d",&size);
//	
//	 int a[size];
//	printf("Enter Array Elements :");
//	for(i=0; i<size;i++)
//	{
//		printf("Enter a[%d] :",i);
//		scanf("%d",&a[i]);
//		
//	}
//	
//    	//accending
//	for(i=0;i<5;i++)
//	{
//		for(j=i+1;j<5;j++)
//		{
//			if(a[i]>a[j])
//			{
//				swap=a[i];
//				a[i]=a[j];
//				a[j]=swap;
//			}
//		}
//	}
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// Comparator function for qsort
//int compare(const void *a, const void *b) {
//    return (*(int *)b - *(int *)a);
//}
//
//int main() {
//    int myArray[] = {4, 2, 8, 1, 6};
//    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
//
//    // Sorting the array in descending order using qsort
//    qsort(myArray, arraySize, sizeof(int), compare);
//
//    // Printing the sorted array
//    for (int i = 0; i < arraySize; i++) {
//        printf("%d ", myArray[i]);
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int arraySize;

    // Getting the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    // Dynamically allocating memory for the array
    int *myArray = (int *)malloc(arraySize * sizeof(int));

    // Getting array elements from the user
    printf("Enter %d elements for the array:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &myArray[i]);
    }

    // Sorting the array in descending order using qsort
    qsort(myArray, arraySize, sizeof(int), compare);

    // Printing the sorted array
    printf("Sorted array in descending order: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }

    // Freeing dynamically allocated memory
    free(myArray);

    return 0;
}

