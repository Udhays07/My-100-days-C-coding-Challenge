#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove non-alphabet characters from a string
void removeNonAlphabets(char *str) {
    int j = 0; // Index for the modified string
    
    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // If the current character is an alphabet, keep it in the string
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    
    // Add null terminator to the end of the modified string
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Remove non-alphabet characters from the string
    removeNonAlphabets(str);

    printf("String after removing non-alphabet characters: %s\n", str);

    return 0;
}
