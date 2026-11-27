Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int findPivotInteger(int n);
void printPivotInteger(int n);

int main() {
    int n1 = 8;
    printf("Output 1: ");
    printPivotInteger(n1);

    int n2 = 1;
    printf("Output 2: ");
    printPivotInteger(n2);

    int n3 = 4;
    printf("Output 3: ");
    printPivotInteger(n3);

    return 0;
}

void printPivotInteger(int n) {
    int pivotInteger = findPivotInteger(n);
    printf("%d\n", pivotInteger);
}

int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        int rightSum = totalSum - leftSum - x;
        if (leftSum == rightSum) {
            return x;
        }
        leftSum += x;
    }

    return -1;
}
