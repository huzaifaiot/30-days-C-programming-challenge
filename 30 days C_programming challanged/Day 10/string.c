#include <stdio.h>

// Function to calculate the length of a string
int string_length(char str[]) {
    int length = 0;
    // Loop through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function to calculate the length of the string
    int length = string_length(str);

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}