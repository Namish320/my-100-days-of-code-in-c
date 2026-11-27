Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadanes algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int maxSubarraySum(int arr[], int size) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < size; i++) {
        maxEndingHere = (arr[i] > maxEndingHere + arr[i]) ? arr[i] : maxEndingHere + arr[i];
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }

    return maxSoFar;
}

int main() {
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: %d\n", maxSubarraySum(arr1, size1));

    int arr2[] = {-2, -4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: %d\n", maxSubarraySum(arr2, size2));

    int arr3[] = {5, 4, 1, 7, 8};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: %d\n", maxSubarraySum(arr3, size3));

    return 0;
}
