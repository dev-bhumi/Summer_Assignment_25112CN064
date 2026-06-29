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

    // Calculate column-wise sum
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            sum[j] += A[i][j];
        }
    }

    // Print column sums
    printf("Column-wise sums:\n");
    for(int j = 0; j < cols; j++) {
        printf("Column %d sum = %d\n", j+1, sum[j]);
    }

    return 0;
}
