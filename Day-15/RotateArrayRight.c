#include <stdio.h>

void rotateRight(int arr[], int n) {
    int last = arr[n - 1];  // store the last element

    // shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // put the last element at the front
    arr[0] = last;
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

    rotateRight(arr, n);

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
