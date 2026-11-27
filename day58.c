Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

void productExceptSelf(int nums[], int answer[], int size);

int main() {
    int nums1[] = {1, 2, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int answer1[size1];
    productExceptSelf(nums1, answer1, size1);
    printf("Output 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d", answer1[i]);
        if (i < size1 - 1) {
            printf(", ");
        }
    }
    printf("\n");

    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int answer2[size2];
    productExceptSelf(nums2, answer2, size2);
    printf("Output 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d", answer2[i]);
        if (i < size2 - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

void productExceptSelf(int nums[], int answer[], int size) {
    for (int i = 0; i < size; i++) {
        answer[i] = 1;
        for (int j = 0; j < size; j++) {
            if (i != j) {
                answer[i] *= nums[j];
            }
        }
    }
}
