#include <stdio.h>

int main() {
    int n, sum, found = 0;  
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;   // mark that at least one pair was found
            }
        }
    }

    if (!found) {
        printf("No pairs found with sum %d\n", sum);
    }

    return 0;
}
