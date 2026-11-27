Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>

void findPreviousGreaterElements(int arr[], int size);

int main() {
    int arr1[] = {1, 3, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: ");
    findPreviousGreaterElements(arr1, size1);

    int arr2[] = {6, 8, 0, 1, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: ");
    findPreviousGreaterElements(arr2, size2);

    int arr3[] = {1, 2, 3, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: ");
    findPreviousGreaterElements(arr3, size3);

    int arr4[] = {5, 4, 3, 1};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Output 4: ");
    findPreviousGreaterElements(arr4, size4);

    return 0;
}

void findPreviousGreaterElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int previousGreater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;
            }
        }
        printf("%d", previousGreater);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
