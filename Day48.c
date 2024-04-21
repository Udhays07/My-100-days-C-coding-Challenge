#include <stdio.h>

int countDivisors(int n) {
    int divisors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors++;
        }
    }
    return divisors;
}

int main() {
    int count = 0;
    for (int num = 1; num <= 1000; num++) { 
        if (countDivisors(num) == 9) {
            printf("%d has exactly 9 divisors.\n", num);
            count++;
        }
    }
    printf("Total numbers with exactly 9 divisors: %d\n", count);
    return 0;
}
