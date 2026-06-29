#include <stdio.h>

int main() {
    char str[100];
    int i = 0, lower = 0, upper = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // reads full line including spaces

    // Count lowercase and uppercase
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }
        i++;
    }

    printf("Lowercase letters = %d\n", lower);
    printf("Uppercase letters = %d\n", upper);

    return 0;
}
