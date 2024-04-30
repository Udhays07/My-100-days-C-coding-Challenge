#include <stdio.h>

void string_copy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; 
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%s", source);

    string_copy(source, destination);

    printf("Copied string: %s\n", destination);

    return 0;
}
