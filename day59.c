Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int findMaxSum(int arr[], int size, int k);

int main() {
    int arr1[] = {100, 200, 300, 400};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1: %d\n", findMaxSum(arr1, size1, k1));

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("Output 2: %d\n", findMaxSum(arr2, size2, k2));

    int arr3[] = {100, 200, 300, 400};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 1;
    printf("Output 3: %d\n", findMaxSum(arr3, size3, k3));

    return 0;
}

int findMaxSum(int arr[], int size, int k) {
    if (k > size) {
        printf("Invalid input\n");
        return -1;
    }

    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;
    for (int i = k; i < size; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
