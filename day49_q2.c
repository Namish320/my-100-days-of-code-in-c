Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Print the first character of the first word
    printf("%c.", name[0]);

    // Find the last space and print the first character of the last word
    char *lastSpace = strrchr(name, ' ');
    if (lastSpace != NULL) {
        printf("%c. %s\n", *(lastSpace + 1), lastSpace + 1);
    } else {
        printf("\n");
    }

    return 0;
}