Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char longestWord[100] = "";
    char *word = strtok(sentence, " \n");

    while (word != NULL) {
        if (strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}