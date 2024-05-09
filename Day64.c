#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int length = strlen(str);
    char temp;
    
    // Bubble sort algorithm to sort characters in the string
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    // Sort the string
    sortString(str);
    
    printf("String in alphabetical order: %s\n", str);
    
    return 0;
}
