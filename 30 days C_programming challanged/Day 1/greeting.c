#include <stdio.h>

int main() {
    char name[50];

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print the personalized greeting
    printf("Hello, %s! Welcome to C programming!\n", name);

    return 0;
}