Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int findMajorityElement(int nums[], int size);
void printMajorityElement(int nums[], int size);

int main() {
    int nums1[] = {3, 2, 3};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: ");
    printMajorityElement(nums1, size1);

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: ");
    printMajorityElement(nums2, size2);

    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: ");
    printMajorityElement(nums3, size3);

    return 0;
}

void printMajorityElement(int nums[], int size) {
    int majorityElement = findMajorityElement(nums, size);
    printf("%d\n", majorityElement);
}

int findMajorityElement(int nums[], int size) {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    // Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate;
    }

    return -1;
}
