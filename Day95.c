#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int max_scalar_product(int* vec1, int* vec2, int n) {
    qsort(vec1, n, sizeof(int), compare);
    qsort(vec2, n, sizeof(int), compare);
    
    int max_product = 0;
    for (int i = 0; i < n; i++) {
        max_product += vec1[i] * vec2[i];
    }
    
    return max_product;
}

int main() {
    int n;

    printf("Enter the number of elements in the vectors: ");
    scanf("%d", &n);

    int vec1[n], vec2[n];

    printf("Enter elements of vector 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec1[i]);
    }

    printf("Enter elements of vector 2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec2[i]);
    }

    int result = max_scalar_product(vec1, vec2, n);

    printf("The maximum scalar product of the two vectors is: %d\n", result);

    return 0;
}
