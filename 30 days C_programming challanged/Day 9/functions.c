#include <stdio.h>

// Function to perform the sum of two numbers
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the sum function and print the result
    int result = sum(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}