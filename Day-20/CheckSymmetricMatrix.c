#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[10][10];
    int isSymmetric = 1;  // assume true

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                isSymmetric = 0;  // found mismatch
                break;
            }
        }
        if(isSymmetric == 0) break;
    }

    // Print result
    if(isSymmetric == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
