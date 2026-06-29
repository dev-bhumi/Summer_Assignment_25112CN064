#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word (no spaces)

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    // Print in reverse
    printf("Reversed string = ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}