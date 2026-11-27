Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated.
 You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
 Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>


int findBound(int nums[], int size, int target, int isFirst);
void printFirstAndLast(int nums[], int size, int target);

int main() {
   
    int nums1[] = {5, 7, 7, 8, 8, 10};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 8;
    printf("Output 1: ");
    printFirstAndLast(nums1, size1, target1);

    
    int nums2[] = {5, 7, 7, 8, 8, 10};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 6;
    printf("Output 2: ");
    printFirstAndLast(nums2, size2, target2); 
    
    int nums3[] = {5, 7, 7, 8, 8, 10};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int target3 = 10;
    printf("Output 3: ");
    printFirstAndLast(nums3, size3, target3); 

    return 0;
}


void printFirstAndLast(int nums[], int size, int target) {
    int firstIndex = findBound(nums, size, target, 1);
    int lastIndex = findBound(nums, size, target, 0); 
    
    printf("%d,%d\n", firstIndex, lastIndex);
}

          
int findBound(int nums[], int size, int target, int isFirst) {
    int left = 0;
    int right = size - 1;
    int boundIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            boundIndex = mid;
            if (isFirst) {
                right = mid - 1; 
            } else {
                left = mid + 1;  
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return boundIndex;
}
