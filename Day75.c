#include <stdio.h>
#include <stdbool.h>
bool isMatch(const char *str, const char *pattern) {
    if (*pattern == '\0' && *str == '\0') {
        return true;
    }
    if (*pattern == '*') {
        return isMatch(str, pattern + 1) || (*str != '\0' && isMatch(str + 1, pattern));
    }

    if (*pattern == '?' || *pattern == *str) {
        return isMatch(str + 1, pattern + 1);
    }
    return false;
}

int main() {
    char str[100], pattern[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("Enter the pattern (with wildcards): ");
    fgets(pattern, sizeof(pattern), stdin);
    if (pattern[strlen(pattern) - 1] == '\n')
        pattern[strlen(pattern) - 1] = '\0';

    if (isMatch(str, pattern)) {
        printf("The strings match.\n");
    } else {
        printf("The strings do not match.\n");
    }

    return 0;
}
