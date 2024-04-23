#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print factorial
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    return 0;
}