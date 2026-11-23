Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Normalize k to avoid unnecessary full rotations
    k = k % n;

    // Create a temporary array to store the rotated elements
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from the temporary array to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}