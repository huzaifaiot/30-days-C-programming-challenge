#include <stdio.h>

// Function to calculate the power of a number using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / power(base, -exponent);
    }
}

int main() {
    double base, result;
    int exponent;

    // Ask the user to enter the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power of the number using the power function
    result = power(base, exponent);

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}