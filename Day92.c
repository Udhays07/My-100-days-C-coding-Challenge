#include <stdio.h>

int MaxSubArrProd(int *arr, int n) {
    int ans = arr[0];

    for (int i = 0; i < n; i++) {
        int prod = arr[i];
        for (int j = i + 1; j < n; j++) {
            ans = ans > prod ? ans : prod;
            prod = prod * arr[j];
        }
        ans = ans > prod ? ans : prod;
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", MaxSubArrProd(arr, n));
    return 0;
}
