#include <stdio.h>

void find_symmetric_pairs(int arr[][2], int n) {
    printf("Symmetric pairs are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                printf("(%d, %d) and (%d, %d)\n", arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of pairs: ");
    scanf("%d", &n);

    int arr[n][2];

    printf("Enter the pairs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    find_symmetric_pairs(arr, n);

    return 0;
}
