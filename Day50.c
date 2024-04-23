#include <stdio.h>

// Function to print solid rectangle star pattern
void solidRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print hollow rectangle star pattern
void hollowRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Solid Rectangle Pattern:\n");
    solidRectangle(rows, cols);

    printf("\nHollow Rectangle Pattern:\n");
    hollowRectangle(rows, cols);

    return 0;
}
