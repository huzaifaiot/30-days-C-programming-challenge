
#include <stdio.h>

int main() {
    long long binaryNumber;
    int decimalNumber = 0, base = 1, remainder;

    // Ask the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    // Convert binary to decimal
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    // Print the decimal number
    printf("Decimal number: %d\n", decimalNumber);

    return 0;
}
