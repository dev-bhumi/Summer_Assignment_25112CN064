#include <stdio.h>

int main() {
    int n;
    printf("Enter n (total numbers including missing one): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (from 1 to %d, with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of 1 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of given array
    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;
    printf("Missing number is: %d\n", missing);

    return 0;
}
