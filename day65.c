Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    int len1 = strlen(s);
    int len2 = strlen(t);

    if (len1 != len2) {
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < len1; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    if (isAnagram(s1, t1)) {
        printf("Output 1: Anagram\n");
    } else {
        printf("Output 1: Not Anagram\n");
    }

    char s2[] = "rat";
    char t2[] = "car";
    if (isAnagram(s2, t2)) {
        printf("Output 2: Anagram\n");
    } else {
        printf("Output 2: Not Anagram\n");
    }

    return 0;
}
