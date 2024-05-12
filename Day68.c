#include <stdio.h>
#include <string.h>

// Function to remove spaces from a string
void removeSpaces(char *str) {
    int count = 0;

    // Iterate through each character of the string
    for (int i = 0; str[i]; i++) {
        // If the current character is not a space, keep it in the string
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);

    return 0;
}
