#include <stdio.h>
#include <stdbool.h>

const char* determineArrayType(int arr[], int size) {
    if (size == 0) {
        return "Empty array";
    }

    bool isAscending = true;
    bool isDescending = true;
    bool isSame = true;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            isAscending = false;
        }
        if (arr[i] > arr[i - 1]) {
            isDescending = false;
        }
        if (arr[i] != arr[0]) {
            isSame = false;
        }
    }

    if (isSame) {
        return "All elements are the same";
    }
    if (isAscending) {
        return "Sorted in ascending order";
    }
    if (isDescending) {
        return "Sorted in descending order";
    }
    return "Unsorted";
}

int main() {
    int arr[100];
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    const char* result = determineArrayType(arr, size);
    printf("The array is: %s\n", result);

    return 0;
}
