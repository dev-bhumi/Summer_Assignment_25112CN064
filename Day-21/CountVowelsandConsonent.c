#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // reads full line including spaces

    // Check each character
    while(str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase for easy checking
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if((ch >= 'a' && ch <= 'z')) {   // only letters
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
