Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, numDigits = 0, temp, swappedNumber = 0, base = 1;

    printf("Enter a number:\n");
    scanf("%d", &n);

    // Find the last digit
    lastDigit = n % 10;

    // Find the first digit and count the number of digits
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        numDigits++;
    }
    firstDigit = temp;

    // Calculate the base for the first digit
    for (int i = 0; i < numDigits; i++) {
        base *= 10;
    }

    // Swap the first and last digits
    swappedNumber = lastDigit * base + (n % base) / 10 * 10 + firstDigit;

    printf("Number after swapping first and last digits is: %d\n", swappedNumber);

    return 0;
}