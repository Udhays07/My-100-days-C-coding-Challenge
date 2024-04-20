#include <stdio.h>

int count_digit_3(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 3) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("Number: %d, Count of 3: %d\n", i, count_digit_3(i));
    }

    return 0;
}
