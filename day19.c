Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Find the larger number
    int larger = (a > b) ? a : b;

    // Find the LCM
    for (int i = larger; ; i += larger) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}