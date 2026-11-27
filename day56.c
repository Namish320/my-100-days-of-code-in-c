Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>

void findNextGreaterElements(int arr[], int size);

int main() {
    int arr1[] = {1, 3, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: ");
    findNextGreaterElements(arr1, size1);

    int arr2[] = {6, 8, 0, 1, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: ");
    findNextGreaterElements(arr2, size2);

    int arr3[] = {1, 2, 3, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: ");
    findNextGreaterElements(arr3, size3);

    int arr4[] = {5, 4, 3, 1};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Output 4: ");
    findNextGreaterElements(arr4, size4);

    return 0;
}

void findNextGreaterElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        printf("%d", nextGreater);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
