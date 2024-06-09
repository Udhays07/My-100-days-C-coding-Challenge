#include <stdio.h>

int can_be_made_equal(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Check if all elements are the same
    if (min == max) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (can_be_made_equal(arr, n)) {
        printf("The numbers in the array can be made equal.\n");
    } else {
        printf("The numbers in the array cannot be made equal.\n");
    }

    return 0;
}
