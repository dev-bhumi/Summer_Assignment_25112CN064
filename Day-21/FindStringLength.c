#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word (no spaces)

    // Count characters until '\0' (end of string)
    while(str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
