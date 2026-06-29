#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[10][10], sum[10] = {0};

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate row-wise sum
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i] += A[i][j];
        }
    }

    // Print row sums
    printf("Row-wise sums:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i+1, sum[i]);
    }

    return 0;
}
