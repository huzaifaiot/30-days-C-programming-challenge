#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Convert the string to lowercase to make counting easier
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    // Count the vowels
    for (i = 0; str[i]; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
