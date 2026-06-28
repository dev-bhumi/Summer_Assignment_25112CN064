#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2], size = 0;

    // Copy all elements of first array
    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < size; j++) {
            if (arr1[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            unionArr[size++] = arr1[i];
        }
    }

    // Copy all elements of second array
    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        for (int j = 0; j < size; j++) {
            if (arr2[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
