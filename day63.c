Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>

int findKthSmallest(int arr[], int size, int k) {
    // Simple approach: sort the array and return the element at index k-1
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k - 1];
}

int main() {
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    printf("Output 1: %d\n", findKthSmallest(arr1, size1, k1));

    int arr2[] = {7, 10, 4, 3, 20, 15};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2: %d\n", findKthSmallest(arr2, size2, k2));

    return 0;
}
