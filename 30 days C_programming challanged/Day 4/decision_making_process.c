#include <stdio.h>

int main() {
    char choice;

    // Prompt the user for input
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &choice);

    // Check the user's choice
    if (choice == 'y' || choice == 'Y') {
        printf("You chose to continue.\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("You chose to stop.\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
