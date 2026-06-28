#include <stdio.h>

void rotateLeft(int arr[], int n) {
    int first = arr[0];  // store the first element

    // shift all elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // put the first element at the end
    arr[n - 1] = first;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateLeft(arr, n);

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}