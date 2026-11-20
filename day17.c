Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digit;
    int numDigits = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (original == sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}