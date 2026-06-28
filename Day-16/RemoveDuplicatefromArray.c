#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int newArr[n], newSize = 0;
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
