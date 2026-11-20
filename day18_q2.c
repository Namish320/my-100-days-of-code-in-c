Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Find the smaller number
    int smaller = (a < b) ? a : b;

    // Find the HCF
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}