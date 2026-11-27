Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;

    int maxLength = 0;
    int start = 0;
    int charIndex[256]; // Assuming ASCII characters

    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        if (charIndex[s[end]] >= start) {
            start = charIndex[s[end]] + 1;
        }
        charIndex[s[end]] = end;
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }

    return maxLength;
}

int main() {
    char s1[] = "abcabcbb";
    printf("Output 1: %d\n", lengthOfLongestSubstring(s1));

    char s2[] = "bbbbb";
    printf("Output 2: %d\n", lengthOfLongestSubstring(s2));

    char s3[] = "pwwkew";
    printf("Output 3: %d\n", lengthOfLongestSubstring(s3));

    return 0;
}
