#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (strlen(str1) > 0 && str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
