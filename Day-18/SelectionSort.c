#include <stdio.h>

int main() {
    int n, i, j, min, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;  // assume current index is minimum
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;  // update minimum index
            }
        }
        // swap arr[i] and arr[min]
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
