// Write a Program to check if String is a palindrome or not
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;
    
    while (low < high) {
        if (str[low] != str[high]) {
            return 0; 
        }
        low++; 
        high--;
    }
    return 1; 
}
int main() {
    char str[100];  
    printf("Enter a string: ");
    fgets(str, 100, stdin);  
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
